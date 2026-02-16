# Verilator VGA Viewer - PowerShell version
# Usage: .\verilator-view.ps1 <source-folder> [top-module]

param(
    [Parameter(Mandatory=$true)]
    [string]$SourceFolder,
    
    [Parameter(Mandatory=$false)]
    [string]$TopModule = ""
)

# Verify source folder exists
if (-not (Test-Path $SourceFolder)) {
    Write-Host "Error: Source folder not found: $SourceFolder" -ForegroundColor Red
    exit 1
}

# Convert to absolute path
$SourceFolder = (Resolve-Path $SourceFolder).Path

Write-Host "==========================================" -ForegroundColor Cyan
Write-Host "Verilator VGA Viewer" -ForegroundColor Cyan
Write-Host "==========================================" -ForegroundColor Cyan
Write-Host "Source folder: $SourceFolder"

# Auto-detect top module if not provided
if ($TopModule -eq "") {
    Write-Host "`nAuto-detecting top module..."
    
    $vFiles = Get-ChildItem -Path $SourceFolder -Filter "*.v"
    foreach ($file in $vFiles) {
        $content = Get-Content $file.FullName
        foreach ($line in $content) {
            if ($line -match '^\s*module\s+(tt_um_\w+|project)\s*[\(;]') {
                $TopModule = $matches[1]
                break
            }
        }
        if ($TopModule -ne "") { break }
    }
    
    if ($TopModule -eq "") {
        Write-Host "Error: Could not auto-detect top module" -ForegroundColor Red
        Write-Host "Please specify top module as second argument"
        exit 1
    }
    Write-Host "Found top module: $TopModule"
}

Write-Host "Top module: $TopModule"
Write-Host ""

# Clean previous build
Write-Host "Cleaning previous build..."
if (Test-Path "obj_dir") {
    Remove-Item -Recurse -Force "obj_dir"
}
if (Test-Path "generic_vga_viewer.exe") {
    Remove-Item -Force "generic_vga_viewer.exe"
}

# Build with Verilator
Write-Host "`nBuilding with Verilator...`n" -ForegroundColor Yellow

# Verilator is a Perl script, so we need to invoke it through perl or via MSYS2 bash
$msysBash = "C:\msys64\usr\bin\bash.exe"
if (-not (Test-Path $msysBash)) {
    Write-Host "Error: MSYS2 bash not found at $msysBash" -ForegroundColor Red
    exit 1
}

# Convert Windows paths to Unix-style paths for bash
$sourceFolderUnix = $SourceFolder -replace '\\', '/' -replace '^([A-Za-z]):', '/$1'
$sourceFolderUnix = $sourceFolderUnix -replace '/([A-Z])/', {$_.Groups[1].Value.ToLower() + '/'}

# Build command for Verilator
$verilatorCmd = @"
cd '$PWD' && \
verilator --cc --exe \
    -Wall -Wno-fatal \
    -Wno-EOFNEWLINE \
    -Wno-DECLFILENAME \
    -Wno-WIDTHEXPAND \
    -Wno-WIDTHTRUNC \
    -Wno-UNUSEDSIGNAL \
    -Wno-UNUSEDPARAM \
    -Wno-PINMISSING \
    --Mdir obj_dir \
    -CFLAGS '-std=c++17 -Wall -Wextra -DSDL_MAIN_HANDLED' \
    -D 'TOP_MODULE=$TopModule' \
    -I'$sourceFolderUnix' \
    -y '$sourceFolderUnix' \
    tb/tbGenericVga.v \
    genericVgaViewer.cpp \
    --top-module tbGenericVga \
    -o generic_vga_viewer
"@

# Run Verilator through MSYS2 bash
& $msysBash -l -c $verilatorCmd

if ($LASTEXITCODE -ne 0) {
    Write-Host "`n==========================================" -ForegroundColor Red
    Write-Host "Verilator failed! Check errors above." -ForegroundColor Red
    Write-Host "==========================================" -ForegroundColor Red
    exit 1
}

Write-Host "`nVerilator completed. Compiling C++ code...`n" -ForegroundColor Yellow

# Add SDL2 libraries to the makefile
Add-Content -Path "obj_dir\VtbGenericVga.mk" -Value "LIBS += -lmingw32 -lSDL2main -lSDL2"
Add-Content -Path "obj_dir\VtbGenericVga.mk" -Value "LDFLAGS += -Wl,-subsystem,console -Wl,-Bstatic -Wl,-Bdynamic"

# Compile with make
& make -C obj_dir -f VtbGenericVga.mk

if ($LASTEXITCODE -ne 0) {
    Write-Host "`n==========================================" -ForegroundColor Red
    Write-Host "Compilation failed! Check errors above." -ForegroundColor Red
    Write-Host "==========================================" -ForegroundColor Red
    exit 1
}

# Copy executable
if (Test-Path "obj_dir\generic_vga_viewer.exe") {
    Copy-Item "obj_dir\generic_vga_viewer.exe" -Destination "." -Force
}

if (Test-Path "generic_vga_viewer.exe") {
    Write-Host "`n==========================================" -ForegroundColor Green
    Write-Host "Build successful!" -ForegroundColor Green
    Write-Host "==========================================" -ForegroundColor Green
    Write-Host "`nRunning VGA viewer..."
    Write-Host "Controls:"
    Write-Host "  ESC - Exit application"
    Write-Host ""
    
    & .\generic_vga_viewer.exe
} else {
    Write-Host "`n==========================================" -ForegroundColor Red
    Write-Host "Build failed! Executable not found." -ForegroundColor Red
    Write-Host "==========================================" -ForegroundColor Red
    exit 1
}

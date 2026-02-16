CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -DSDL_MAIN_HANDLED
LDFLAGS = -Wl,-subsystem,console -Wl,-Bstatic -Wl,-Bdynamic
LIBS = -lmingw32 -lSDL2main -lSDL2

# Verilator paths
VERILATOR_ROOT ?= /usr/share/verilator
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe \
                  -Wall -Wno-fatal \
                  -Wno-EOFNEWLINE \
                  -Wno-DECLFILENAME \
                  -Wno-WIDTHEXPAND \
                  -Wno-WIDTHTRUNC \
                  -Wno-UNUSEDSIGNAL \
                  -Wno-UNUSEDPARAM \
                  -Wno-PINMISSING \
                  -I.. \
                  --Mdir obj_dir \
                  -CFLAGS "$(CXXFLAGS)"

# All Verilog source files for oscilloscope
VERILOG_SOURCES = \
    ../deploy/vgaDriver.v \
    ../deploy/ps2Driver.v \
    scancodeROM.v \
    fontROM.v \
    ../deploy/parameterRAM.v \
    ../deploy/menuFSM.v \
    ../deploy/characterRAM.v \
    ../deploy/clockCounter.v \
    ../deploy/textComposer.v \
    ../deploy/textGenerator.v \
    ../deploy/fakeADC.v \
    ../deploy/ringBuffer.v \
    ../deploy/trigger.v \
    ../deploy/adcSpiAd7928.v \
    ../deploy/adcControl.v \
    ../deploy/displayBuffer.v \
    ../deploy/timeVoltageCorrection.v \
    ../deploy/waveformGenerator.v \
    ../deploy/axisGenerator.v \
    ../deploy/pixelArbiter.v \
    ../deploy/waveformProperties.v \
    ../deploy/oscilloscopeTop.v \
    tb/ps2KeyboardVerilator.v \
    tb/tbOscilloscopeVerilator.v

CPP_SOURCE = oscilloscopeVerilator.cpp

# Verilog source files for vgaDisplay testbench
VGADISPLAY_VERILOG_SOURCES = \
    ../fixing/top.v \
    tb/tbVgaDisplayVerilator.v

VGADISPLAY_CPP_SOURCE = vgaDisplayVerilator.cpp

# default target
all: copy_mem_files oscilloscopeVerilator

# copy .mem files to test-verilator directory (local modules look for *.mem)
copy_mem_files:
	@if [ ! -f font8x8.mem ]; then cp ../mem/font8x8.mem . || true; fi
	@if [ ! -f scancode.mem ]; then cp ../mem/scancode.mem . || true; fi

# build oscilloscope with Verilator
oscilloscopeVerilator: copy_mem_files $(VERILOG_SOURCES) $(CPP_SOURCE)
	$(VERILATOR) $(VERILATOR_FLAGS) \
	    $(VERILOG_SOURCES) \
	    $(CPP_SOURCE) \
	    --top-module tbOscilloscopeVerilator \
	    -o oscilloscopeVerilator
	@echo 'LIBS += $(LIBS)' >> obj_dir/VtbOscilloscopeVerilator.mk
	@echo 'LDFLAGS += $(LDFLAGS)' >> obj_dir/VtbOscilloscopeVerilator.mk
	$(MAKE) -C obj_dir -f VtbOscilloscopeVerilator.mk
	@if [ -f obj_dir/oscilloscopeVerilator ]; then mv obj_dir/oscilloscopeVerilator .; \
	elif [ -f obj_dir/oscilloscopeVerilator.exe ]; then cp obj_dir/oscilloscopeVerilator.exe .; fi

# build vgaDisplay with Verilator
vgaDisplayVerilator: $(VGADISPLAY_VERILOG_SOURCES) $(VGADISPLAY_CPP_SOURCE)
	$(VERILATOR) $(VERILATOR_FLAGS) \
	    $(VGADISPLAY_VERILOG_SOURCES) \
	    $(VGADISPLAY_CPP_SOURCE) \
	    --top-module tbVgaDisplayVerilator \
	    -o vgaDisplayVerilator
	@echo 'LIBS += $(LIBS)' >> obj_dir/VtbVgaDisplayVerilator.mk
	@echo 'LDFLAGS += $(LDFLAGS)' >> obj_dir/VtbVgaDisplayVerilator.mk
	$(MAKE) -C obj_dir -f VtbVgaDisplayVerilator.mk
	@if [ -f obj_dir/vgaDisplayVerilator ]; then mv obj_dir/vgaDisplayVerilator .; \
	elif [ -f obj_dir/vgaDisplayVerilator.exe ]; then cp obj_dir/vgaDisplayVerilator.exe .; fi

clean:
	rm -rf obj_dir
	rm -f oscilloscopeVerilator oscilloscopeVerilator.exe
	rm -f vgaDisplayVerilator vgaDisplayVerilator.exe
	rm -f font8x8.mem scancode.mem

.PHONY: all clean copy_mem_files vgaDisplayVerilator


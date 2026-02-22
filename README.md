# How to build the c-implementation of the raytracer

**Option 1: Windows (build.bat)**
1. Ensure MSYS2 UCRT64 is installed at `C:\msys64\ucrt64` with SDL2 installed
2. Navigate to `c-implementation/` folder
3. Run `build.bat` to compile and launch the raytracer

**Option 2: CMake (cross-platform)**
1. Install CMake (3.16+) and SDL2
2. Navigate to `c-implementation/` folder
3. Create a build directory:
   ```bash
   mkdir build && cd build
   cmake ..
   cmake --build . --config Release
   ./raytracer  # or raytracer.exe on Windows
   ```

The raytracer renders a 640×480 scene using Q8.4 fixed-point math and displays it in an SDL2 window.

# How to use verilator-bench to see proper-implementation-no-uart in action
1. Edit `verilator-bench/config.sh`:
   - Set `VERILATOR_SOURCE_FOLDER` to `proper-implementation-no-uart`
   - Set `VERILATOR_TOP_MODULE` to `raytracer_simple`
2. In an MSYS2 UCRT64 terminal, navigate to `verilator-bench/`
3. Run `bash run.sh` to build and launch the raytracer in an SDL window
4. Make sure you have dependencies installed: Verilator, CMake, SDL2, etc.

# How to generate more scenes for the proper-implementation-no-uart
1. go to rayforge.ayannali.net to generate a new scene
2. copy this .sv file and place into scene_lut.sv in proper-implementation-no-uart
3. re-run verilator-bench to see the new scene in action

# Presentation
<img width="2000" height="1125" alt="3601180f-01" src="https://github.com/user-attachments/assets/77bcc199-25b6-4918-8414-030c3ec841cd" />
<img width="2000" height="1125" alt="3601180f-02" src="https://github.com/user-attachments/assets/82f11d48-a9d7-4695-9476-8c8a34477648" />
<img width="2000" height="1125" alt="3601180f-03" src="https://github.com/user-attachments/assets/11017b86-55df-40ee-87ac-2d6d34c2edfe" />
<img width="2000" height="1125" alt="3601180f-04" src="https://github.com/user-attachments/assets/d4cec7ef-058f-4c45-877d-1d1ff4b45af5" />
<img width="2000" height="1125" alt="3601180f-05" src="https://github.com/user-attachments/assets/10ecdd63-a5ef-44a7-be09-803469331c56" />
<img width="2000" height="1125" alt="3601180f-06" src="https://github.com/user-attachments/assets/789e38a8-5752-4ae5-85d4-1518d2584061" />
<img width="2000" height="1125" alt="3601180f-07" src="https://github.com/user-attachments/assets/b13e5b23-f083-419c-8cc5-bf2e9ac476a2" />
<img width="2000" height="1125" alt="3601180f-08" src="https://github.com/user-attachments/assets/0d857ad1-a6f1-427f-a05f-45f48db62161" />
<img width="2000" height="1125" alt="3601180f-09" src="https://github.com/user-attachments/assets/f2f03216-f053-4a57-8762-dc26b116ebdd" />
<img width="2000" height="1125" alt="3601180f-10" src="https://github.com/user-attachments/assets/0426cb51-7d4a-45fd-91a9-e705070a0e13" />
<img width="2000" height="1125" alt="3601180f-11" src="https://github.com/user-attachments/assets/cf35e862-27f3-4e03-93f3-0f91ef270c32" />
<img width="2000" height="1125" alt="3601180f-12" src="https://github.com/user-attachments/assets/0bd2baae-9ffc-4e07-a396-17ced77fbab6" />

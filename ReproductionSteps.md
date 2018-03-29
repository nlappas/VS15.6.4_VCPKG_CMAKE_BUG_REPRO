# Reproduction Steps

1. Install latest version of `vcpkg` (as of 3/28/18), and execute the installation steps as shown in the official github [repo](https://github.com/Microsoft/vcpkg). In my case I installed it in `D:\vcpkg-master`
2. Install from `vcpkg`  the boost library for windows x64 with the command: `vcpkg install boost:x64-windows` 
3. Open my `\VS15.6.4_VCPKG_CMAKE_BUG_REPRO` folder with visual studio `15.6.4` 
   1. Double check that the CMakeSettings are loaded properly from the root of my project, and that they are not the default



Now you should be getting the following **error** message in the output window of cmake:

```
1> Command line: C:\PROGRAM FILES (X86)\MICROSOFT VISUAL STUDIO\2017\COMMUNITY\COMMON7\IDE\COMMONEXTENSIONS\MICROSOFT\CMAKE\CMake\bin\cmake.exe  -G "Visual Studio 15 2017 Win64" -DCMAKE_INSTALL_PREFIX:PATH="C:\Users\username\\CMakeBuilds\\f83620a4-25de-6d3d-940d-b8ce325208a2\\install\\x64-Debug"  -DCMAKE_TOOLCHAIN_FILE="D:/vcpkg-master/scripts/buildsystems/vcpkg.cmake"  -DCMAKE_CXX_COMPILER="C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/HostX64/x64/cl.exe"  -DCMAKE_C_COMPILER="C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.13.26128/bin/HostX64/x64/cl.exe"  -DCMAKE_CONFIGURATION_TYPES="Debug" "C:\Users\username\Desktop\repro"
1> Working directory: C:\Users\username\Desktop\repro\build\x64-Debug
1> -- Boost version: 1.66.0
1> FOUND BOOST
1> -- Configuring done
1> -- Generating done
1> -- Build files have been written to: C:/Users/username/Desktop/repro/build/x64-Debug
1> Starting CMake target info extraction ...
1> CMake server connection made.
1> Extracted includes paths.
1> Extracted CMake variables.
1> Extracted source files and headers.
1> Extracted global settings.
1> Extracted code model.
1> Extracted CTest info.
1> Collating data ...
1> Target info extraction done.
file=d:\vcpkg-master\scripts\buildsystems\vcpkg.cmake should not be rooted in a drive
Parameter name: file
Actual value was d:\vcpkg-master\scripts\buildsystems\vcpkg.cmake.file=d:\vcpkg-master\scripts\buildsystems\vcpkg.cmake should not be rooted in a drive
Parameter name: file
Actual value was d:\vcpkg-master\scripts\buildsystems\vcpkg.cmake.1> CMake generation canceled.
```

In the folder `\cmake_manual_build` you can see the project that I generated manually by calling cmake from powershell. This works properly with visual studio.
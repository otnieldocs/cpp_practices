## Getting Started
Create folder "build" on every folders

## Compile the project on Windows Environment

### Compile Project Using CMAKE-GUI
- Install cmake from this page https://cmake.org/download/
- Install visual studio compiler
- follow the steps mentioned here : https://cmake.org/runningcmake/

### Compile Project Using CMAKE command
- Make sure there's no C:\cygwin64\bin registered on environment variable (if any, remove it)
- Install visual studio compiler
- Install cmake from this page https://cmake.org/download/
- Add msbuild path into environment variable (e.g C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin)
- run `cmake -S . -B build`
- run `msbuild build/<projectname>.sln
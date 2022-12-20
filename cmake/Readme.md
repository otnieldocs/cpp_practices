## Windows
Create build directory under cmake. This folder is added to gitignore.

To run the CMakeLists.txt, use this command on cmake directory.
`cmake -S . -B build`

Then go to build folder : `cd build`

Then build the .sln file : `msbuild mycmake.sln`

Make sure `msbuild` command has been registered on the environment variable (in my case, C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\MSBuild\15.0\Bin)
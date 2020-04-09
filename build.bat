mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
msbuild build/MouseEditor.sln ..
cd ..

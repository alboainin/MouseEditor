mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
msbuild bin/mouse.sln /Build
cd ..

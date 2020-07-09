cmake_minimum_required(VERSION 3.5)

project("MouseEditor" CXX)

# Set output directories.
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Check if compiler name.
message(${CMAKE_C_COMPILER_ID})

# Set build type definitions.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D__DEBUG__)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-D__RELEASE__)
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

file(GLOB_RECURSE mouse_hdrs "src/*.h")
file(GLOB_RECURSE mouse_srcs "src/*.cpp")

include_directories("src/")
include_directories("app/")

add_executable(mouse ${mosue_hdrs} ${mouse_srcs})

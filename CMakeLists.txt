cmake_minimum_required(VERSION 3.5)

project("MouseEditor" C)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

message(${CMAKE_C_COMPILE_ID})

# Set build type definitions.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D__DEBUG__)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-D__RELEASE__)
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

# MouseEditor
file(GLOB_RECURSE mouse_hdrs "src/*.h" "app/*.h")
file(GLOB_RECURSE mouse_srcs "src/*.c" "app/*.c")

include_directories("src/")
include_directories("app/")

add_executable(mouse ${mosue_hdrs} ${mouse_srcs})

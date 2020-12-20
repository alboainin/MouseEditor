cmake_minimum_required(VERSION 3.5)

project("MouseEditor" CXX)

# Set output directories.
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Check if compiler name.
message(${CMAKE_CXX_COMPILER_ID})

# Set build type definitions.
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_definitions(-D__DEBUG__)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")
if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_definitions(-D__RELEASE__)
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

# Add spdlog project
add_subdirectory("vendor/spdlog/")

# Add mosue project
file(GLOB_RECURSE mouse_hdrs "src/*.h")
file(GLOB_RECURSE mouse_srcs "src/*.cpp")

include_directories("src/"
					"vendor/spdlog/include/")

add_executable(mouse ${mouse_hdrs} ${mouse_srcs})


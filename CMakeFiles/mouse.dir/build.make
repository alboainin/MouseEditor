# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alialboainin96/project/MouseEditor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alialboainin96/project/MouseEditor

# Include any dependencies generated for this target.
include CMakeFiles/mouse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mouse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mouse.dir/flags.make

CMakeFiles/mouse.dir/src/log/log.cpp.o: CMakeFiles/mouse.dir/flags.make
CMakeFiles/mouse.dir/src/log/log.cpp.o: src/log/log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mouse.dir/src/log/log.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mouse.dir/src/log/log.cpp.o -c /home/alialboainin96/project/MouseEditor/src/log/log.cpp

CMakeFiles/mouse.dir/src/log/log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mouse.dir/src/log/log.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alialboainin96/project/MouseEditor/src/log/log.cpp > CMakeFiles/mouse.dir/src/log/log.cpp.i

CMakeFiles/mouse.dir/src/log/log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mouse.dir/src/log/log.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alialboainin96/project/MouseEditor/src/log/log.cpp -o CMakeFiles/mouse.dir/src/log/log.cpp.s

CMakeFiles/mouse.dir/src/main.cpp.o: CMakeFiles/mouse.dir/flags.make
CMakeFiles/mouse.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mouse.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mouse.dir/src/main.cpp.o -c /home/alialboainin96/project/MouseEditor/src/main.cpp

CMakeFiles/mouse.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mouse.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alialboainin96/project/MouseEditor/src/main.cpp > CMakeFiles/mouse.dir/src/main.cpp.i

CMakeFiles/mouse.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mouse.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alialboainin96/project/MouseEditor/src/main.cpp -o CMakeFiles/mouse.dir/src/main.cpp.s

CMakeFiles/mouse.dir/src/ui/file.cpp.o: CMakeFiles/mouse.dir/flags.make
CMakeFiles/mouse.dir/src/ui/file.cpp.o: src/ui/file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mouse.dir/src/ui/file.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mouse.dir/src/ui/file.cpp.o -c /home/alialboainin96/project/MouseEditor/src/ui/file.cpp

CMakeFiles/mouse.dir/src/ui/file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mouse.dir/src/ui/file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alialboainin96/project/MouseEditor/src/ui/file.cpp > CMakeFiles/mouse.dir/src/ui/file.cpp.i

CMakeFiles/mouse.dir/src/ui/file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mouse.dir/src/ui/file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alialboainin96/project/MouseEditor/src/ui/file.cpp -o CMakeFiles/mouse.dir/src/ui/file.cpp.s

CMakeFiles/mouse.dir/src/ui/status.cpp.o: CMakeFiles/mouse.dir/flags.make
CMakeFiles/mouse.dir/src/ui/status.cpp.o: src/ui/status.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mouse.dir/src/ui/status.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mouse.dir/src/ui/status.cpp.o -c /home/alialboainin96/project/MouseEditor/src/ui/status.cpp

CMakeFiles/mouse.dir/src/ui/status.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mouse.dir/src/ui/status.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alialboainin96/project/MouseEditor/src/ui/status.cpp > CMakeFiles/mouse.dir/src/ui/status.cpp.i

CMakeFiles/mouse.dir/src/ui/status.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mouse.dir/src/ui/status.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alialboainin96/project/MouseEditor/src/ui/status.cpp -o CMakeFiles/mouse.dir/src/ui/status.cpp.s

CMakeFiles/mouse.dir/src/ui/ui.cpp.o: CMakeFiles/mouse.dir/flags.make
CMakeFiles/mouse.dir/src/ui/ui.cpp.o: src/ui/ui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mouse.dir/src/ui/ui.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mouse.dir/src/ui/ui.cpp.o -c /home/alialboainin96/project/MouseEditor/src/ui/ui.cpp

CMakeFiles/mouse.dir/src/ui/ui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mouse.dir/src/ui/ui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alialboainin96/project/MouseEditor/src/ui/ui.cpp > CMakeFiles/mouse.dir/src/ui/ui.cpp.i

CMakeFiles/mouse.dir/src/ui/ui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mouse.dir/src/ui/ui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alialboainin96/project/MouseEditor/src/ui/ui.cpp -o CMakeFiles/mouse.dir/src/ui/ui.cpp.s

# Object files for target mouse
mouse_OBJECTS = \
"CMakeFiles/mouse.dir/src/log/log.cpp.o" \
"CMakeFiles/mouse.dir/src/main.cpp.o" \
"CMakeFiles/mouse.dir/src/ui/file.cpp.o" \
"CMakeFiles/mouse.dir/src/ui/status.cpp.o" \
"CMakeFiles/mouse.dir/src/ui/ui.cpp.o"

# External object files for target mouse
mouse_EXTERNAL_OBJECTS =

bin/mouse: CMakeFiles/mouse.dir/src/log/log.cpp.o
bin/mouse: CMakeFiles/mouse.dir/src/main.cpp.o
bin/mouse: CMakeFiles/mouse.dir/src/ui/file.cpp.o
bin/mouse: CMakeFiles/mouse.dir/src/ui/status.cpp.o
bin/mouse: CMakeFiles/mouse.dir/src/ui/ui.cpp.o
bin/mouse: CMakeFiles/mouse.dir/build.make
bin/mouse: /usr/lib/x86_64-linux-gnu/libcurses.so
bin/mouse: /usr/lib/x86_64-linux-gnu/libform.so
bin/mouse: CMakeFiles/mouse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alialboainin96/project/MouseEditor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable bin/mouse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mouse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mouse.dir/build: bin/mouse

.PHONY : CMakeFiles/mouse.dir/build

CMakeFiles/mouse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mouse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mouse.dir/clean

CMakeFiles/mouse.dir/depend:
	cd /home/alialboainin96/project/MouseEditor && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alialboainin96/project/MouseEditor /home/alialboainin96/project/MouseEditor /home/alialboainin96/project/MouseEditor /home/alialboainin96/project/MouseEditor /home/alialboainin96/project/MouseEditor/CMakeFiles/mouse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mouse.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/152/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/152/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/Project/c++/PAT-B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/Project/c++/PAT-B/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/b1021.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/b1021.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/b1021.dir/flags.make

CMakeFiles/b1021.dir/b1021.cpp.o: CMakeFiles/b1021.dir/flags.make
CMakeFiles/b1021.dir/b1021.cpp.o: ../b1021.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/b1021.dir/b1021.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/b1021.dir/b1021.cpp.o -c /work/Project/c++/PAT-B/b1021.cpp

CMakeFiles/b1021.dir/b1021.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/b1021.dir/b1021.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/Project/c++/PAT-B/b1021.cpp > CMakeFiles/b1021.dir/b1021.cpp.i

CMakeFiles/b1021.dir/b1021.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/b1021.dir/b1021.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/Project/c++/PAT-B/b1021.cpp -o CMakeFiles/b1021.dir/b1021.cpp.s

# Object files for target b1021
b1021_OBJECTS = \
"CMakeFiles/b1021.dir/b1021.cpp.o"

# External object files for target b1021
b1021_EXTERNAL_OBJECTS =

b1021: CMakeFiles/b1021.dir/b1021.cpp.o
b1021: CMakeFiles/b1021.dir/build.make
b1021: CMakeFiles/b1021.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable b1021"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/b1021.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/b1021.dir/build: b1021

.PHONY : CMakeFiles/b1021.dir/build

CMakeFiles/b1021.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/b1021.dir/cmake_clean.cmake
.PHONY : CMakeFiles/b1021.dir/clean

CMakeFiles/b1021.dir/depend:
	cd /work/Project/c++/PAT-B/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/Project/c++/PAT-B /work/Project/c++/PAT-B /work/Project/c++/PAT-B/cmake-build-debug /work/Project/c++/PAT-B/cmake-build-debug /work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles/b1021.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/b1021.dir/depend


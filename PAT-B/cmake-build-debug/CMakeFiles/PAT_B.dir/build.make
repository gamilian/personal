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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/Project/c++/PAT-B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/Project/c++/PAT-B/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PAT_B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PAT_B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PAT_B.dir/flags.make

CMakeFiles/PAT_B.dir/main.cpp.o: CMakeFiles/PAT_B.dir/flags.make
CMakeFiles/PAT_B.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PAT_B.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PAT_B.dir/main.cpp.o -c /work/Project/c++/PAT-B/main.cpp

CMakeFiles/PAT_B.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PAT_B.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/Project/c++/PAT-B/main.cpp > CMakeFiles/PAT_B.dir/main.cpp.i

CMakeFiles/PAT_B.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PAT_B.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/Project/c++/PAT-B/main.cpp -o CMakeFiles/PAT_B.dir/main.cpp.s

# Object files for target PAT_B
PAT_B_OBJECTS = \
"CMakeFiles/PAT_B.dir/main.cpp.o"

# External object files for target PAT_B
PAT_B_EXTERNAL_OBJECTS =

PAT_B: CMakeFiles/PAT_B.dir/main.cpp.o
PAT_B: CMakeFiles/PAT_B.dir/build.make
PAT_B: CMakeFiles/PAT_B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PAT_B"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PAT_B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PAT_B.dir/build: PAT_B

.PHONY : CMakeFiles/PAT_B.dir/build

CMakeFiles/PAT_B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PAT_B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PAT_B.dir/clean

CMakeFiles/PAT_B.dir/depend:
	cd /work/Project/c++/PAT-B/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/Project/c++/PAT-B /work/Project/c++/PAT-B /work/Project/c++/PAT-B/cmake-build-debug /work/Project/c++/PAT-B/cmake-build-debug /work/Project/c++/PAT-B/cmake-build-debug/CMakeFiles/PAT_B.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PAT_B.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

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
CMAKE_COMMAND = /opt/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agba/Qt/Accelerated_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agba/Qt/Accelerated_CPP/cmake-build-debug

# Include any dependencies generated for this target.
include 1/input/CMakeFiles/input.dir/depend.make

# Include the progress variables for this target.
include 1/input/CMakeFiles/input.dir/progress.make

# Include the compile flags for this target's objects.
include 1/input/CMakeFiles/input.dir/flags.make

1/input/CMakeFiles/input.dir/main.cpp.o: 1/input/CMakeFiles/input.dir/flags.make
1/input/CMakeFiles/input.dir/main.cpp.o: ../1/input/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 1/input/CMakeFiles/input.dir/main.cpp.o"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/input.dir/main.cpp.o -c /home/agba/Qt/Accelerated_CPP/1/input/main.cpp

1/input/CMakeFiles/input.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/input.dir/main.cpp.i"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agba/Qt/Accelerated_CPP/1/input/main.cpp > CMakeFiles/input.dir/main.cpp.i

1/input/CMakeFiles/input.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/input.dir/main.cpp.s"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agba/Qt/Accelerated_CPP/1/input/main.cpp -o CMakeFiles/input.dir/main.cpp.s

1/input/CMakeFiles/input.dir/main.cpp.o.requires:

.PHONY : 1/input/CMakeFiles/input.dir/main.cpp.o.requires

1/input/CMakeFiles/input.dir/main.cpp.o.provides: 1/input/CMakeFiles/input.dir/main.cpp.o.requires
	$(MAKE) -f 1/input/CMakeFiles/input.dir/build.make 1/input/CMakeFiles/input.dir/main.cpp.o.provides.build
.PHONY : 1/input/CMakeFiles/input.dir/main.cpp.o.provides

1/input/CMakeFiles/input.dir/main.cpp.o.provides.build: 1/input/CMakeFiles/input.dir/main.cpp.o


# Object files for target input
input_OBJECTS = \
"CMakeFiles/input.dir/main.cpp.o"

# External object files for target input
input_EXTERNAL_OBJECTS =

1/input/input: 1/input/CMakeFiles/input.dir/main.cpp.o
1/input/input: 1/input/CMakeFiles/input.dir/build.make
1/input/input: 1/input/CMakeFiles/input.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable input"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/input.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
1/input/CMakeFiles/input.dir/build: 1/input/input

.PHONY : 1/input/CMakeFiles/input.dir/build

1/input/CMakeFiles/input.dir/requires: 1/input/CMakeFiles/input.dir/main.cpp.o.requires

.PHONY : 1/input/CMakeFiles/input.dir/requires

1/input/CMakeFiles/input.dir/clean:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input && $(CMAKE_COMMAND) -P CMakeFiles/input.dir/cmake_clean.cmake
.PHONY : 1/input/CMakeFiles/input.dir/clean

1/input/CMakeFiles/input.dir/depend:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agba/Qt/Accelerated_CPP /home/agba/Qt/Accelerated_CPP/1/input /home/agba/Qt/Accelerated_CPP/cmake-build-debug /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input /home/agba/Qt/Accelerated_CPP/cmake-build-debug/1/input/CMakeFiles/input.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 1/input/CMakeFiles/input.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
include 4/func_org2/CMakeFiles/func_org2.dir/depend.make

# Include the progress variables for this target.
include 4/func_org2/CMakeFiles/func_org2.dir/progress.make

# Include the compile flags for this target's objects.
include 4/func_org2/CMakeFiles/func_org2.dir/flags.make

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o: 4/func_org2/CMakeFiles/func_org2.dir/flags.make
4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o: ../4/func_org2/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/func_org2.dir/main.cpp.o -c /home/agba/Qt/Accelerated_CPP/4/func_org2/main.cpp

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/func_org2.dir/main.cpp.i"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agba/Qt/Accelerated_CPP/4/func_org2/main.cpp > CMakeFiles/func_org2.dir/main.cpp.i

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/func_org2.dir/main.cpp.s"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agba/Qt/Accelerated_CPP/4/func_org2/main.cpp -o CMakeFiles/func_org2.dir/main.cpp.s

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.requires:

.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.requires

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.provides: 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.requires
	$(MAKE) -f 4/func_org2/CMakeFiles/func_org2.dir/build.make 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.provides.build
.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.provides

4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.provides.build: 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o


# Object files for target func_org2
func_org2_OBJECTS = \
"CMakeFiles/func_org2.dir/main.cpp.o"

# External object files for target func_org2
func_org2_EXTERNAL_OBJECTS =

4/func_org2/func_org2: 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o
4/func_org2/func_org2: 4/func_org2/CMakeFiles/func_org2.dir/build.make
4/func_org2/func_org2: 4/func_org2/CMakeFiles/func_org2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable func_org2"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/func_org2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
4/func_org2/CMakeFiles/func_org2.dir/build: 4/func_org2/func_org2

.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/build

4/func_org2/CMakeFiles/func_org2.dir/requires: 4/func_org2/CMakeFiles/func_org2.dir/main.cpp.o.requires

.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/requires

4/func_org2/CMakeFiles/func_org2.dir/clean:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 && $(CMAKE_COMMAND) -P CMakeFiles/func_org2.dir/cmake_clean.cmake
.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/clean

4/func_org2/CMakeFiles/func_org2.dir/depend:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agba/Qt/Accelerated_CPP /home/agba/Qt/Accelerated_CPP/4/func_org2 /home/agba/Qt/Accelerated_CPP/cmake-build-debug /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2 /home/agba/Qt/Accelerated_CPP/cmake-build-debug/4/func_org2/CMakeFiles/func_org2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 4/func_org2/CMakeFiles/func_org2.dir/depend


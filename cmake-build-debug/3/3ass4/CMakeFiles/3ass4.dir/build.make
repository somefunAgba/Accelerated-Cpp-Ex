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
include 3/3ass4/CMakeFiles/3ass4.dir/depend.make

# Include the progress variables for this target.
include 3/3ass4/CMakeFiles/3ass4.dir/progress.make

# Include the compile flags for this target's objects.
include 3/3ass4/CMakeFiles/3ass4.dir/flags.make

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o: 3/3ass4/CMakeFiles/3ass4.dir/flags.make
3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o: ../3/3ass4/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/3ass4.dir/main.cpp.o -c /home/agba/Qt/Accelerated_CPP/3/3ass4/main.cpp

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3ass4.dir/main.cpp.i"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agba/Qt/Accelerated_CPP/3/3ass4/main.cpp > CMakeFiles/3ass4.dir/main.cpp.i

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3ass4.dir/main.cpp.s"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agba/Qt/Accelerated_CPP/3/3ass4/main.cpp -o CMakeFiles/3ass4.dir/main.cpp.s

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.requires:

.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.requires

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.provides: 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.requires
	$(MAKE) -f 3/3ass4/CMakeFiles/3ass4.dir/build.make 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.provides.build
.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.provides

3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.provides.build: 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o


# Object files for target 3ass4
3ass4_OBJECTS = \
"CMakeFiles/3ass4.dir/main.cpp.o"

# External object files for target 3ass4
3ass4_EXTERNAL_OBJECTS =

3/3ass4/3ass4: 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o
3/3ass4/3ass4: 3/3ass4/CMakeFiles/3ass4.dir/build.make
3/3ass4/3ass4: 3/3ass4/CMakeFiles/3ass4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agba/Qt/Accelerated_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3ass4"
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3ass4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
3/3ass4/CMakeFiles/3ass4.dir/build: 3/3ass4/3ass4

.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/build

3/3ass4/CMakeFiles/3ass4.dir/requires: 3/3ass4/CMakeFiles/3ass4.dir/main.cpp.o.requires

.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/requires

3/3ass4/CMakeFiles/3ass4.dir/clean:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 && $(CMAKE_COMMAND) -P CMakeFiles/3ass4.dir/cmake_clean.cmake
.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/clean

3/3ass4/CMakeFiles/3ass4.dir/depend:
	cd /home/agba/Qt/Accelerated_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agba/Qt/Accelerated_CPP /home/agba/Qt/Accelerated_CPP/3/3ass4 /home/agba/Qt/Accelerated_CPP/cmake-build-debug /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4 /home/agba/Qt/Accelerated_CPP/cmake-build-debug/3/3ass4/CMakeFiles/3ass4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3/3ass4/CMakeFiles/3ass4.dir/depend


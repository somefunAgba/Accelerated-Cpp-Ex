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
CMAKE_SOURCE_DIR = /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/taking_strings_apart.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/taking_strings_apart.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/taking_strings_apart.dir/flags.make

CMakeFiles/taking_strings_apart.dir/main.cpp.o: CMakeFiles/taking_strings_apart.dir/flags.make
CMakeFiles/taking_strings_apart.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/taking_strings_apart.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/taking_strings_apart.dir/main.cpp.o -c /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/main.cpp

CMakeFiles/taking_strings_apart.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/taking_strings_apart.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/main.cpp > CMakeFiles/taking_strings_apart.dir/main.cpp.i

CMakeFiles/taking_strings_apart.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/taking_strings_apart.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/main.cpp -o CMakeFiles/taking_strings_apart.dir/main.cpp.s

CMakeFiles/taking_strings_apart.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/taking_strings_apart.dir/main.cpp.o.requires

CMakeFiles/taking_strings_apart.dir/main.cpp.o.provides: CMakeFiles/taking_strings_apart.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/taking_strings_apart.dir/build.make CMakeFiles/taking_strings_apart.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/taking_strings_apart.dir/main.cpp.o.provides

CMakeFiles/taking_strings_apart.dir/main.cpp.o.provides.build: CMakeFiles/taking_strings_apart.dir/main.cpp.o


# Object files for target taking_strings_apart
taking_strings_apart_OBJECTS = \
"CMakeFiles/taking_strings_apart.dir/main.cpp.o"

# External object files for target taking_strings_apart
taking_strings_apart_EXTERNAL_OBJECTS =

taking_strings_apart: CMakeFiles/taking_strings_apart.dir/main.cpp.o
taking_strings_apart: CMakeFiles/taking_strings_apart.dir/build.make
taking_strings_apart: CMakeFiles/taking_strings_apart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable taking_strings_apart"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/taking_strings_apart.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/taking_strings_apart.dir/build: taking_strings_apart

.PHONY : CMakeFiles/taking_strings_apart.dir/build

CMakeFiles/taking_strings_apart.dir/requires: CMakeFiles/taking_strings_apart.dir/main.cpp.o.requires

.PHONY : CMakeFiles/taking_strings_apart.dir/requires

CMakeFiles/taking_strings_apart.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/taking_strings_apart.dir/cmake_clean.cmake
.PHONY : CMakeFiles/taking_strings_apart.dir/clean

CMakeFiles/taking_strings_apart.dir/depend:
	cd /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug /home/agba/Qt/Accelerated_CPP/5/taking_strings_apart/cmake-build-debug/CMakeFiles/taking_strings_apart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/taking_strings_apart.dir/depend


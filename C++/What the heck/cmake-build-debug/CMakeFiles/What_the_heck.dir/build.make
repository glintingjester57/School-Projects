# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /cygdrive/c/Users/easto/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/easto/.CLion2018.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/School/CS 1410/Programs/What the heck"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/What_the_heck.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/What_the_heck.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/What_the_heck.dir/flags.make

CMakeFiles/What_the_heck.dir/main.cpp.o: CMakeFiles/What_the_heck.dir/flags.make
CMakeFiles/What_the_heck.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/What_the_heck.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/What_the_heck.dir/main.cpp.o -c "/cygdrive/d/School/CS 1410/Programs/What the heck/main.cpp"

CMakeFiles/What_the_heck.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/What_the_heck.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/School/CS 1410/Programs/What the heck/main.cpp" > CMakeFiles/What_the_heck.dir/main.cpp.i

CMakeFiles/What_the_heck.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/What_the_heck.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/School/CS 1410/Programs/What the heck/main.cpp" -o CMakeFiles/What_the_heck.dir/main.cpp.s

# Object files for target What_the_heck
What_the_heck_OBJECTS = \
"CMakeFiles/What_the_heck.dir/main.cpp.o"

# External object files for target What_the_heck
What_the_heck_EXTERNAL_OBJECTS =

What_the_heck.exe: CMakeFiles/What_the_heck.dir/main.cpp.o
What_the_heck.exe: CMakeFiles/What_the_heck.dir/build.make
What_the_heck.exe: CMakeFiles/What_the_heck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable What_the_heck.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/What_the_heck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/What_the_heck.dir/build: What_the_heck.exe

.PHONY : CMakeFiles/What_the_heck.dir/build

CMakeFiles/What_the_heck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/What_the_heck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/What_the_heck.dir/clean

CMakeFiles/What_the_heck.dir/depend:
	cd "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/School/CS 1410/Programs/What the heck" "/cygdrive/d/School/CS 1410/Programs/What the heck" "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug" "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug" "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug/CMakeFiles/What_the_heck.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/What_the_heck.dir/depend


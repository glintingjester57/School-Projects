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
CMAKE_SOURCE_DIR = "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Tax_calculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tax_calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tax_calculator.dir/flags.make

CMakeFiles/Tax_calculator.dir/main.cpp.o: CMakeFiles/Tax_calculator.dir/flags.make
CMakeFiles/Tax_calculator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tax_calculator.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tax_calculator.dir/main.cpp.o -c "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/main.cpp"

CMakeFiles/Tax_calculator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tax_calculator.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/main.cpp" > CMakeFiles/Tax_calculator.dir/main.cpp.i

CMakeFiles/Tax_calculator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tax_calculator.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/main.cpp" -o CMakeFiles/Tax_calculator.dir/main.cpp.s

# Object files for target Tax_calculator
Tax_calculator_OBJECTS = \
"CMakeFiles/Tax_calculator.dir/main.cpp.o"

# External object files for target Tax_calculator
Tax_calculator_EXTERNAL_OBJECTS =

Tax_calculator.exe: CMakeFiles/Tax_calculator.dir/main.cpp.o
Tax_calculator.exe: CMakeFiles/Tax_calculator.dir/build.make
Tax_calculator.exe: CMakeFiles/Tax_calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tax_calculator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tax_calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tax_calculator.dir/build: Tax_calculator.exe

.PHONY : CMakeFiles/Tax_calculator.dir/build

CMakeFiles/Tax_calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tax_calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tax_calculator.dir/clean

CMakeFiles/Tax_calculator.dir/depend:
	cd "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator" "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator" "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug" "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug" "/cygdrive/d/Personal Documents/School/CS 1410/Programs/Tax calculator/cmake-build-debug/CMakeFiles/Tax_calculator.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tax_calculator.dir/depend

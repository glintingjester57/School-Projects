cmake_minimum_required(VERSION 3.12.2.0)
project(CMAKE_TRY_COMPILE CXX)
set(CMAKE_VERBOSE_MAKEFILE 1)
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_DEFINITIONS}")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--enable-auto-import")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${EXE_LINKER_FLAGS}")
include_directories(${INCLUDE_DIRECTORIES})
set(CMAKE_SUPPRESS_REGENERATION 1)
link_directories(${LINK_DIRECTORIES})
add_definitions(-std=c++1z)
cmake_policy(SET CMP0065 NEW)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug/CMakeFiles/CMakeTmp")
add_executable(cmTC_bee3b "/cygdrive/d/School/CS 1410/Programs/What the heck/cmake-build-debug/CMakeFiles/feature_tests.cxx")
target_link_libraries(cmTC_bee3b  "" )

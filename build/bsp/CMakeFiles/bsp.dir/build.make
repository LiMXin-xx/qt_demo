# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lmx/work/github/qt_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lmx/work/github/qt_demo/build

# Include any dependencies generated for this target.
include bsp/CMakeFiles/bsp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bsp/CMakeFiles/bsp.dir/compiler_depend.make

# Include the progress variables for this target.
include bsp/CMakeFiles/bsp.dir/progress.make

# Include the compile flags for this target's objects.
include bsp/CMakeFiles/bsp.dir/flags.make

bsp/CMakeFiles/bsp.dir/src/app.cpp.o: bsp/CMakeFiles/bsp.dir/flags.make
bsp/CMakeFiles/bsp.dir/src/app.cpp.o: ../bsp/src/app.cpp
bsp/CMakeFiles/bsp.dir/src/app.cpp.o: bsp/CMakeFiles/bsp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmx/work/github/qt_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bsp/CMakeFiles/bsp.dir/src/app.cpp.o"
	cd /home/lmx/work/github/qt_demo/build/bsp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bsp/CMakeFiles/bsp.dir/src/app.cpp.o -MF CMakeFiles/bsp.dir/src/app.cpp.o.d -o CMakeFiles/bsp.dir/src/app.cpp.o -c /home/lmx/work/github/qt_demo/bsp/src/app.cpp

bsp/CMakeFiles/bsp.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bsp.dir/src/app.cpp.i"
	cd /home/lmx/work/github/qt_demo/build/bsp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lmx/work/github/qt_demo/bsp/src/app.cpp > CMakeFiles/bsp.dir/src/app.cpp.i

bsp/CMakeFiles/bsp.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bsp.dir/src/app.cpp.s"
	cd /home/lmx/work/github/qt_demo/build/bsp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lmx/work/github/qt_demo/bsp/src/app.cpp -o CMakeFiles/bsp.dir/src/app.cpp.s

# Object files for target bsp
bsp_OBJECTS = \
"CMakeFiles/bsp.dir/src/app.cpp.o"

# External object files for target bsp
bsp_EXTERNAL_OBJECTS =

bsp/libbsp.so: bsp/CMakeFiles/bsp.dir/src/app.cpp.o
bsp/libbsp.so: bsp/CMakeFiles/bsp.dir/build.make
bsp/libbsp.so: bsp/CMakeFiles/bsp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lmx/work/github/qt_demo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libbsp.so"
	cd /home/lmx/work/github/qt_demo/build/bsp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bsp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bsp/CMakeFiles/bsp.dir/build: bsp/libbsp.so
.PHONY : bsp/CMakeFiles/bsp.dir/build

bsp/CMakeFiles/bsp.dir/clean:
	cd /home/lmx/work/github/qt_demo/build/bsp && $(CMAKE_COMMAND) -P CMakeFiles/bsp.dir/cmake_clean.cmake
.PHONY : bsp/CMakeFiles/bsp.dir/clean

bsp/CMakeFiles/bsp.dir/depend:
	cd /home/lmx/work/github/qt_demo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lmx/work/github/qt_demo /home/lmx/work/github/qt_demo/bsp /home/lmx/work/github/qt_demo/build /home/lmx/work/github/qt_demo/build/bsp /home/lmx/work/github/qt_demo/build/bsp/CMakeFiles/bsp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bsp/CMakeFiles/bsp.dir/depend


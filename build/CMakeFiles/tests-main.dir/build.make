# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /home/gustavo/.local/pipx/venvs/cmake/lib/python3.12/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/gustavo/.local/pipx/venvs/cmake/lib/python3.12/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gustavo/programming/blockchain

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gustavo/programming/blockchain/build

# Include any dependencies generated for this target.
include CMakeFiles/tests-main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tests-main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tests-main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tests-main.dir/flags.make

CMakeFiles/tests-main.dir/tests/main.cpp.o: CMakeFiles/tests-main.dir/flags.make
CMakeFiles/tests-main.dir/tests/main.cpp.o: /home/gustavo/programming/blockchain/tests/main.cpp
CMakeFiles/tests-main.dir/tests/main.cpp.o: CMakeFiles/tests-main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/gustavo/programming/blockchain/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tests-main.dir/tests/main.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tests-main.dir/tests/main.cpp.o -MF CMakeFiles/tests-main.dir/tests/main.cpp.o.d -o CMakeFiles/tests-main.dir/tests/main.cpp.o -c /home/gustavo/programming/blockchain/tests/main.cpp

CMakeFiles/tests-main.dir/tests/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tests-main.dir/tests/main.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gustavo/programming/blockchain/tests/main.cpp > CMakeFiles/tests-main.dir/tests/main.cpp.i

CMakeFiles/tests-main.dir/tests/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tests-main.dir/tests/main.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gustavo/programming/blockchain/tests/main.cpp -o CMakeFiles/tests-main.dir/tests/main.cpp.s

CMakeFiles/tests-main.dir/src/Hash.cpp.o: CMakeFiles/tests-main.dir/flags.make
CMakeFiles/tests-main.dir/src/Hash.cpp.o: /home/gustavo/programming/blockchain/src/Hash.cpp
CMakeFiles/tests-main.dir/src/Hash.cpp.o: CMakeFiles/tests-main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/gustavo/programming/blockchain/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tests-main.dir/src/Hash.cpp.o"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tests-main.dir/src/Hash.cpp.o -MF CMakeFiles/tests-main.dir/src/Hash.cpp.o.d -o CMakeFiles/tests-main.dir/src/Hash.cpp.o -c /home/gustavo/programming/blockchain/src/Hash.cpp

CMakeFiles/tests-main.dir/src/Hash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tests-main.dir/src/Hash.cpp.i"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gustavo/programming/blockchain/src/Hash.cpp > CMakeFiles/tests-main.dir/src/Hash.cpp.i

CMakeFiles/tests-main.dir/src/Hash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tests-main.dir/src/Hash.cpp.s"
	/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gustavo/programming/blockchain/src/Hash.cpp -o CMakeFiles/tests-main.dir/src/Hash.cpp.s

# Object files for target tests-main
tests__main_OBJECTS = \
"CMakeFiles/tests-main.dir/tests/main.cpp.o" \
"CMakeFiles/tests-main.dir/src/Hash.cpp.o"

# External object files for target tests-main
tests__main_EXTERNAL_OBJECTS =

tests-main: CMakeFiles/tests-main.dir/tests/main.cpp.o
tests-main: CMakeFiles/tests-main.dir/src/Hash.cpp.o
tests-main: CMakeFiles/tests-main.dir/build.make
tests-main: /usr/lib/libssl.so
tests-main: /usr/lib/libcrypto.so
tests-main: /usr/lib64/libCatch2.a
tests-main: CMakeFiles/tests-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/gustavo/programming/blockchain/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tests-main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tests-main.dir/build: tests-main
.PHONY : CMakeFiles/tests-main.dir/build

CMakeFiles/tests-main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tests-main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tests-main.dir/clean

CMakeFiles/tests-main.dir/depend:
	cd /home/gustavo/programming/blockchain/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gustavo/programming/blockchain /home/gustavo/programming/blockchain /home/gustavo/programming/blockchain/build /home/gustavo/programming/blockchain/build /home/gustavo/programming/blockchain/build/CMakeFiles/tests-main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tests-main.dir/depend


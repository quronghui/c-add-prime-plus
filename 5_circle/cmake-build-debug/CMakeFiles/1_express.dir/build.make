# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/quronghui/HustFiles/C++PrimePlus/5_circle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1_express.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1_express.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1_express.dir/flags.make

CMakeFiles/1_express.dir/1_express.cpp.o: CMakeFiles/1_express.dir/flags.make
CMakeFiles/1_express.dir/1_express.cpp.o: ../1_express.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_express.dir/1_express.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/1_express.dir/1_express.cpp.o -c /home/quronghui/HustFiles/C++PrimePlus/5_circle/1_express.cpp

CMakeFiles/1_express.dir/1_express.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_express.dir/1_express.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quronghui/HustFiles/C++PrimePlus/5_circle/1_express.cpp > CMakeFiles/1_express.dir/1_express.cpp.i

CMakeFiles/1_express.dir/1_express.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_express.dir/1_express.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quronghui/HustFiles/C++PrimePlus/5_circle/1_express.cpp -o CMakeFiles/1_express.dir/1_express.cpp.s

# Object files for target 1_express
1_express_OBJECTS = \
"CMakeFiles/1_express.dir/1_express.cpp.o"

# External object files for target 1_express
1_express_EXTERNAL_OBJECTS =

1_express: CMakeFiles/1_express.dir/1_express.cpp.o
1_express: CMakeFiles/1_express.dir/build.make
1_express: CMakeFiles/1_express.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_express"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/1_express.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1_express.dir/build: 1_express

.PHONY : CMakeFiles/1_express.dir/build

CMakeFiles/1_express.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/1_express.dir/cmake_clean.cmake
.PHONY : CMakeFiles/1_express.dir/clean

CMakeFiles/1_express.dir/depend:
	cd /home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/quronghui/HustFiles/C++PrimePlus/5_circle /home/quronghui/HustFiles/C++PrimePlus/5_circle /home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug /home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug /home/quronghui/HustFiles/C++PrimePlus/5_circle/cmake-build-debug/CMakeFiles/1_express.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1_express.dir/depend


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
CMAKE_SOURCE_DIR = /home/quronghui/HustFiles/C++PrimePlus/4_data

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sqrt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqrt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqrt.dir/flags.make

CMakeFiles/sqrt.dir/1_sqrt.cpp.o: CMakeFiles/sqrt.dir/flags.make
CMakeFiles/sqrt.dir/1_sqrt.cpp.o: ../1_sqrt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sqrt.dir/1_sqrt.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sqrt.dir/1_sqrt.cpp.o -c /home/quronghui/HustFiles/C++PrimePlus/4_data/1_sqrt.cpp

CMakeFiles/sqrt.dir/1_sqrt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sqrt.dir/1_sqrt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/quronghui/HustFiles/C++PrimePlus/4_data/1_sqrt.cpp > CMakeFiles/sqrt.dir/1_sqrt.cpp.i

CMakeFiles/sqrt.dir/1_sqrt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sqrt.dir/1_sqrt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/quronghui/HustFiles/C++PrimePlus/4_data/1_sqrt.cpp -o CMakeFiles/sqrt.dir/1_sqrt.cpp.s

# Object files for target sqrt
sqrt_OBJECTS = \
"CMakeFiles/sqrt.dir/1_sqrt.cpp.o"

# External object files for target sqrt
sqrt_EXTERNAL_OBJECTS =

sqrt: CMakeFiles/sqrt.dir/1_sqrt.cpp.o
sqrt: CMakeFiles/sqrt.dir/build.make
sqrt: CMakeFiles/sqrt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sqrt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sqrt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqrt.dir/build: sqrt

.PHONY : CMakeFiles/sqrt.dir/build

CMakeFiles/sqrt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sqrt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sqrt.dir/clean

CMakeFiles/sqrt.dir/depend:
	cd /home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/quronghui/HustFiles/C++PrimePlus/4_data /home/quronghui/HustFiles/C++PrimePlus/4_data /home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug /home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug /home/quronghui/HustFiles/C++PrimePlus/4_data/cmake-build-debug/CMakeFiles/sqrt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqrt.dir/depend

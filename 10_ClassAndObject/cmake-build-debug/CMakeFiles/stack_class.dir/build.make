# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\HUST_Files\c-add-prime-plus\10_ClassAndObject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack_class.dir/flags.make

CMakeFiles/stack_class.dir/3_stack_class.cpp.obj: CMakeFiles/stack_class.dir/flags.make
CMakeFiles/stack_class.dir/3_stack_class.cpp.obj: ../3_stack_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stack_class.dir/3_stack_class.cpp.obj"
	C:\software\mingw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stack_class.dir\3_stack_class.cpp.obj -c C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stack_class.cpp

CMakeFiles/stack_class.dir/3_stack_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack_class.dir/3_stack_class.cpp.i"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stack_class.cpp > CMakeFiles\stack_class.dir\3_stack_class.cpp.i

CMakeFiles/stack_class.dir/3_stack_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack_class.dir/3_stack_class.cpp.s"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stack_class.cpp -o CMakeFiles\stack_class.dir\3_stack_class.cpp.s

CMakeFiles/stack_class.dir/3_stacker.cpp.obj: CMakeFiles/stack_class.dir/flags.make
CMakeFiles/stack_class.dir/3_stacker.cpp.obj: ../3_stacker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stack_class.dir/3_stacker.cpp.obj"
	C:\software\mingw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stack_class.dir\3_stacker.cpp.obj -c C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stacker.cpp

CMakeFiles/stack_class.dir/3_stacker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack_class.dir/3_stacker.cpp.i"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stacker.cpp > CMakeFiles\stack_class.dir\3_stacker.cpp.i

CMakeFiles/stack_class.dir/3_stacker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack_class.dir/3_stacker.cpp.s"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\3_stacker.cpp -o CMakeFiles\stack_class.dir\3_stacker.cpp.s

# Object files for target stack_class
stack_class_OBJECTS = \
"CMakeFiles/stack_class.dir/3_stack_class.cpp.obj" \
"CMakeFiles/stack_class.dir/3_stacker.cpp.obj"

# External object files for target stack_class
stack_class_EXTERNAL_OBJECTS =

stack_class.exe: CMakeFiles/stack_class.dir/3_stack_class.cpp.obj
stack_class.exe: CMakeFiles/stack_class.dir/3_stacker.cpp.obj
stack_class.exe: CMakeFiles/stack_class.dir/build.make
stack_class.exe: CMakeFiles/stack_class.dir/linklibs.rsp
stack_class.exe: CMakeFiles/stack_class.dir/objects1.rsp
stack_class.exe: CMakeFiles/stack_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable stack_class.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stack_class.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack_class.dir/build: stack_class.exe

.PHONY : CMakeFiles/stack_class.dir/build

CMakeFiles/stack_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stack_class.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stack_class.dir/clean

CMakeFiles/stack_class.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\HUST_Files\c-add-prime-plus\10_ClassAndObject C:\HUST_Files\c-add-prime-plus\10_ClassAndObject C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug C:\HUST_Files\c-add-prime-plus\10_ClassAndObject\cmake-build-debug\CMakeFiles\stack_class.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack_class.dir/depend


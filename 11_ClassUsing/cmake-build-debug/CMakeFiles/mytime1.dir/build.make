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
CMAKE_SOURCE_DIR = C:\HUST_Files\c-add-prime-plus\11_ClassUsing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mytime1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mytime1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mytime1.dir/flags.make

CMakeFiles/mytime1.dir/mytime1.cpp.obj: CMakeFiles/mytime1.dir/flags.make
CMakeFiles/mytime1.dir/mytime1.cpp.obj: ../mytime1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mytime1.dir/mytime1.cpp.obj"
	C:\software\mingw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mytime1.dir\mytime1.cpp.obj -c C:\HUST_Files\c-add-prime-plus\11_ClassUsing\mytime1.cpp

CMakeFiles/mytime1.dir/mytime1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mytime1.dir/mytime1.cpp.i"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\HUST_Files\c-add-prime-plus\11_ClassUsing\mytime1.cpp > CMakeFiles\mytime1.dir\mytime1.cpp.i

CMakeFiles/mytime1.dir/mytime1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mytime1.dir/mytime1.cpp.s"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\HUST_Files\c-add-prime-plus\11_ClassUsing\mytime1.cpp -o CMakeFiles\mytime1.dir\mytime1.cpp.s

CMakeFiles/mytime1.dir/usetime1.cpp.obj: CMakeFiles/mytime1.dir/flags.make
CMakeFiles/mytime1.dir/usetime1.cpp.obj: ../usetime1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mytime1.dir/usetime1.cpp.obj"
	C:\software\mingw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mytime1.dir\usetime1.cpp.obj -c C:\HUST_Files\c-add-prime-plus\11_ClassUsing\usetime1.cpp

CMakeFiles/mytime1.dir/usetime1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mytime1.dir/usetime1.cpp.i"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\HUST_Files\c-add-prime-plus\11_ClassUsing\usetime1.cpp > CMakeFiles\mytime1.dir\usetime1.cpp.i

CMakeFiles/mytime1.dir/usetime1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mytime1.dir/usetime1.cpp.s"
	C:\software\mingw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\HUST_Files\c-add-prime-plus\11_ClassUsing\usetime1.cpp -o CMakeFiles\mytime1.dir\usetime1.cpp.s

# Object files for target mytime1
mytime1_OBJECTS = \
"CMakeFiles/mytime1.dir/mytime1.cpp.obj" \
"CMakeFiles/mytime1.dir/usetime1.cpp.obj"

# External object files for target mytime1
mytime1_EXTERNAL_OBJECTS =

mytime1.exe: CMakeFiles/mytime1.dir/mytime1.cpp.obj
mytime1.exe: CMakeFiles/mytime1.dir/usetime1.cpp.obj
mytime1.exe: CMakeFiles/mytime1.dir/build.make
mytime1.exe: CMakeFiles/mytime1.dir/linklibs.rsp
mytime1.exe: CMakeFiles/mytime1.dir/objects1.rsp
mytime1.exe: CMakeFiles/mytime1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable mytime1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mytime1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mytime1.dir/build: mytime1.exe

.PHONY : CMakeFiles/mytime1.dir/build

CMakeFiles/mytime1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mytime1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mytime1.dir/clean

CMakeFiles/mytime1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\HUST_Files\c-add-prime-plus\11_ClassUsing C:\HUST_Files\c-add-prime-plus\11_ClassUsing C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug C:\HUST_Files\c-add-prime-plus\11_ClassUsing\cmake-build-debug\CMakeFiles\mytime1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mytime1.dir/depend

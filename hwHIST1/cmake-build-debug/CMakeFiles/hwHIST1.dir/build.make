# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Users\tpc345\AppData\Roaming\JetBrains\CLion 2018.1.6\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\tpc345\AppData\Roaming\JetBrains\CLion 2018.1.6\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tpc345\CLionProjects\hwHIST1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hwHIST1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hwHIST1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hwHIST1.dir/flags.make

CMakeFiles/hwHIST1.dir/main.cpp.obj: CMakeFiles/hwHIST1.dir/flags.make
CMakeFiles/hwHIST1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hwHIST1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hwHIST1.dir\main.cpp.obj -c C:\Users\tpc345\CLionProjects\hwHIST1\main.cpp

CMakeFiles/hwHIST1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwHIST1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tpc345\CLionProjects\hwHIST1\main.cpp > CMakeFiles\hwHIST1.dir\main.cpp.i

CMakeFiles/hwHIST1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwHIST1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tpc345\CLionProjects\hwHIST1\main.cpp -o CMakeFiles\hwHIST1.dir\main.cpp.s

CMakeFiles/hwHIST1.dir/browserhistory.cpp.obj: CMakeFiles/hwHIST1.dir/flags.make
CMakeFiles/hwHIST1.dir/browserhistory.cpp.obj: ../browserhistory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hwHIST1.dir/browserhistory.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hwHIST1.dir\browserhistory.cpp.obj -c C:\Users\tpc345\CLionProjects\hwHIST1\browserhistory.cpp

CMakeFiles/hwHIST1.dir/browserhistory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwHIST1.dir/browserhistory.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tpc345\CLionProjects\hwHIST1\browserhistory.cpp > CMakeFiles\hwHIST1.dir\browserhistory.cpp.i

CMakeFiles/hwHIST1.dir/browserhistory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwHIST1.dir/browserhistory.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tpc345\CLionProjects\hwHIST1\browserhistory.cpp -o CMakeFiles\hwHIST1.dir\browserhistory.cpp.s

# Object files for target hwHIST1
hwHIST1_OBJECTS = \
"CMakeFiles/hwHIST1.dir/main.cpp.obj" \
"CMakeFiles/hwHIST1.dir/browserhistory.cpp.obj"

# External object files for target hwHIST1
hwHIST1_EXTERNAL_OBJECTS =

hwHIST1.exe: CMakeFiles/hwHIST1.dir/main.cpp.obj
hwHIST1.exe: CMakeFiles/hwHIST1.dir/browserhistory.cpp.obj
hwHIST1.exe: CMakeFiles/hwHIST1.dir/build.make
hwHIST1.exe: CMakeFiles/hwHIST1.dir/linklibs.rsp
hwHIST1.exe: CMakeFiles/hwHIST1.dir/objects1.rsp
hwHIST1.exe: CMakeFiles/hwHIST1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hwHIST1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hwHIST1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hwHIST1.dir/build: hwHIST1.exe

.PHONY : CMakeFiles/hwHIST1.dir/build

CMakeFiles/hwHIST1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hwHIST1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hwHIST1.dir/clean

CMakeFiles/hwHIST1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tpc345\CLionProjects\hwHIST1 C:\Users\tpc345\CLionProjects\hwHIST1 C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug C:\Users\tpc345\CLionProjects\hwHIST1\cmake-build-debug\CMakeFiles\hwHIST1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hwHIST1.dir/depend

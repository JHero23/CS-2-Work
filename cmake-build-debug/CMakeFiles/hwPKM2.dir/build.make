# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.6\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\joelg\CLionProjects\hwPKM2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hwPKM2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hwPKM2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hwPKM2.dir/flags.make

CMakeFiles/hwPKM2.dir/main.cpp.obj: CMakeFiles/hwPKM2.dir/flags.make
CMakeFiles/hwPKM2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hwPKM2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hwPKM2.dir\main.cpp.obj -c C:\Users\joelg\CLionProjects\hwPKM2\main.cpp

CMakeFiles/hwPKM2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwPKM2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\joelg\CLionProjects\hwPKM2\main.cpp > CMakeFiles\hwPKM2.dir\main.cpp.i

CMakeFiles/hwPKM2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwPKM2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\joelg\CLionProjects\hwPKM2\main.cpp -o CMakeFiles\hwPKM2.dir\main.cpp.s

CMakeFiles/hwPKM2.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/hwPKM2.dir/main.cpp.obj.requires

CMakeFiles/hwPKM2.dir/main.cpp.obj.provides: CMakeFiles/hwPKM2.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\hwPKM2.dir\build.make CMakeFiles/hwPKM2.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/hwPKM2.dir/main.cpp.obj.provides

CMakeFiles/hwPKM2.dir/main.cpp.obj.provides.build: CMakeFiles/hwPKM2.dir/main.cpp.obj


CMakeFiles/hwPKM2.dir/pokedex.cpp.obj: CMakeFiles/hwPKM2.dir/flags.make
CMakeFiles/hwPKM2.dir/pokedex.cpp.obj: ../pokedex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hwPKM2.dir/pokedex.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hwPKM2.dir\pokedex.cpp.obj -c C:\Users\joelg\CLionProjects\hwPKM2\pokedex.cpp

CMakeFiles/hwPKM2.dir/pokedex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwPKM2.dir/pokedex.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\joelg\CLionProjects\hwPKM2\pokedex.cpp > CMakeFiles\hwPKM2.dir\pokedex.cpp.i

CMakeFiles/hwPKM2.dir/pokedex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwPKM2.dir/pokedex.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\joelg\CLionProjects\hwPKM2\pokedex.cpp -o CMakeFiles\hwPKM2.dir\pokedex.cpp.s

CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.requires:

.PHONY : CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.requires

CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.provides: CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.requires
	$(MAKE) -f CMakeFiles\hwPKM2.dir\build.make CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.provides.build
.PHONY : CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.provides

CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.provides.build: CMakeFiles/hwPKM2.dir/pokedex.cpp.obj


CMakeFiles/hwPKM2.dir/pokemon.cpp.obj: CMakeFiles/hwPKM2.dir/flags.make
CMakeFiles/hwPKM2.dir/pokemon.cpp.obj: ../pokemon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hwPKM2.dir/pokemon.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hwPKM2.dir\pokemon.cpp.obj -c C:\Users\joelg\CLionProjects\hwPKM2\pokemon.cpp

CMakeFiles/hwPKM2.dir/pokemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hwPKM2.dir/pokemon.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\joelg\CLionProjects\hwPKM2\pokemon.cpp > CMakeFiles\hwPKM2.dir\pokemon.cpp.i

CMakeFiles/hwPKM2.dir/pokemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hwPKM2.dir/pokemon.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\joelg\CLionProjects\hwPKM2\pokemon.cpp -o CMakeFiles\hwPKM2.dir\pokemon.cpp.s

CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.requires:

.PHONY : CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.requires

CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.provides: CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.requires
	$(MAKE) -f CMakeFiles\hwPKM2.dir\build.make CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.provides.build
.PHONY : CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.provides

CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.provides.build: CMakeFiles/hwPKM2.dir/pokemon.cpp.obj


# Object files for target hwPKM2
hwPKM2_OBJECTS = \
"CMakeFiles/hwPKM2.dir/main.cpp.obj" \
"CMakeFiles/hwPKM2.dir/pokedex.cpp.obj" \
"CMakeFiles/hwPKM2.dir/pokemon.cpp.obj"

# External object files for target hwPKM2
hwPKM2_EXTERNAL_OBJECTS =

hwPKM2.exe: CMakeFiles/hwPKM2.dir/main.cpp.obj
hwPKM2.exe: CMakeFiles/hwPKM2.dir/pokedex.cpp.obj
hwPKM2.exe: CMakeFiles/hwPKM2.dir/pokemon.cpp.obj
hwPKM2.exe: CMakeFiles/hwPKM2.dir/build.make
hwPKM2.exe: CMakeFiles/hwPKM2.dir/linklibs.rsp
hwPKM2.exe: CMakeFiles/hwPKM2.dir/objects1.rsp
hwPKM2.exe: CMakeFiles/hwPKM2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hwPKM2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hwPKM2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hwPKM2.dir/build: hwPKM2.exe

.PHONY : CMakeFiles/hwPKM2.dir/build

CMakeFiles/hwPKM2.dir/requires: CMakeFiles/hwPKM2.dir/main.cpp.obj.requires
CMakeFiles/hwPKM2.dir/requires: CMakeFiles/hwPKM2.dir/pokedex.cpp.obj.requires
CMakeFiles/hwPKM2.dir/requires: CMakeFiles/hwPKM2.dir/pokemon.cpp.obj.requires

.PHONY : CMakeFiles/hwPKM2.dir/requires

CMakeFiles/hwPKM2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hwPKM2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hwPKM2.dir/clean

CMakeFiles/hwPKM2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\joelg\CLionProjects\hwPKM2 C:\Users\joelg\CLionProjects\hwPKM2 C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug C:\Users\joelg\CLionProjects\hwPKM2\cmake-build-debug\CMakeFiles\hwPKM2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hwPKM2.dir/depend


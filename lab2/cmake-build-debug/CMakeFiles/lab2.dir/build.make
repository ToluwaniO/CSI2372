# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab2.dir/flags.make

CMakeFiles/lab2.dir/Rectangle.cpp.obj: CMakeFiles/lab2.dir/flags.make
CMakeFiles/lab2.dir/Rectangle.cpp.obj: ../Rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab2.dir/Rectangle.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab2.dir\Rectangle.cpp.obj -c C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\Rectangle.cpp

CMakeFiles/lab2.dir/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab2.dir/Rectangle.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\Rectangle.cpp > CMakeFiles\lab2.dir\Rectangle.cpp.i

CMakeFiles/lab2.dir/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab2.dir/Rectangle.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\Rectangle.cpp -o CMakeFiles\lab2.dir\Rectangle.cpp.s

CMakeFiles/lab2.dir/Rectangle.cpp.obj.requires:

.PHONY : CMakeFiles/lab2.dir/Rectangle.cpp.obj.requires

CMakeFiles/lab2.dir/Rectangle.cpp.obj.provides: CMakeFiles/lab2.dir/Rectangle.cpp.obj.requires
	$(MAKE) -f CMakeFiles\lab2.dir\build.make CMakeFiles/lab2.dir/Rectangle.cpp.obj.provides.build
.PHONY : CMakeFiles/lab2.dir/Rectangle.cpp.obj.provides

CMakeFiles/lab2.dir/Rectangle.cpp.obj.provides.build: CMakeFiles/lab2.dir/Rectangle.cpp.obj


# Object files for target lab2
lab2_OBJECTS = \
"CMakeFiles/lab2.dir/Rectangle.cpp.obj"

# External object files for target lab2
lab2_EXTERNAL_OBJECTS =

lab2.exe: CMakeFiles/lab2.dir/Rectangle.cpp.obj
lab2.exe: CMakeFiles/lab2.dir/build.make
lab2.exe: CMakeFiles/lab2.dir/linklibs.rsp
lab2.exe: CMakeFiles/lab2.dir/objects1.rsp
lab2.exe: CMakeFiles/lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab2.dir/build: lab2.exe

.PHONY : CMakeFiles/lab2.dir/build

CMakeFiles/lab2.dir/requires: CMakeFiles/lab2.dir/Rectangle.cpp.obj.requires

.PHONY : CMakeFiles/lab2.dir/requires

CMakeFiles/lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab2.dir/clean

CMakeFiles/lab2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2 C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2 C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug C:\Users\oguns\OneDrive\Documents\uottawa\fall_2017\CSI2372\labs\lab2\cmake-build-debug\CMakeFiles\lab2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab2.dir/depend

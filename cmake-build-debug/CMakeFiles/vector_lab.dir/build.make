# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "Z:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "Z:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\clion projects\vector_lab"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\clion projects\vector_lab\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/vector_lab.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/vector_lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_lab.dir/flags.make

CMakeFiles/vector_lab.dir/main.c.obj: CMakeFiles/vector_lab.dir/flags.make
CMakeFiles/vector_lab.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\clion projects\vector_lab\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/vector_lab.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\vector_lab.dir\main.c.obj -c "E:\clion projects\vector_lab\main.c"

CMakeFiles/vector_lab.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vector_lab.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\clion projects\vector_lab\main.c" > CMakeFiles\vector_lab.dir\main.c.i

CMakeFiles/vector_lab.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vector_lab.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\clion projects\vector_lab\main.c" -o CMakeFiles\vector_lab.dir\main.c.s

CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.obj: CMakeFiles/vector_lab.dir/flags.make
CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.obj: ../libs/data_structures/vector/vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\clion projects\vector_lab\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\vector_lab.dir\libs\data_structures\vector\vector.c.obj -c "E:\clion projects\vector_lab\libs\data_structures\vector\vector.c"

CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\clion projects\vector_lab\libs\data_structures\vector\vector.c" > CMakeFiles\vector_lab.dir\libs\data_structures\vector\vector.c.i

CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\clion projects\vector_lab\libs\data_structures\vector\vector.c" -o CMakeFiles\vector_lab.dir\libs\data_structures\vector\vector.c.s

# Object files for target vector_lab
vector_lab_OBJECTS = \
"CMakeFiles/vector_lab.dir/main.c.obj" \
"CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.obj"

# External object files for target vector_lab
vector_lab_EXTERNAL_OBJECTS =

vector_lab.exe: CMakeFiles/vector_lab.dir/main.c.obj
vector_lab.exe: CMakeFiles/vector_lab.dir/libs/data_structures/vector/vector.c.obj
vector_lab.exe: CMakeFiles/vector_lab.dir/build.make
vector_lab.exe: libs/data_structures/libvector.a
vector_lab.exe: CMakeFiles/vector_lab.dir/linklibs.rsp
vector_lab.exe: CMakeFiles/vector_lab.dir/objects1.rsp
vector_lab.exe: CMakeFiles/vector_lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\clion projects\vector_lab\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable vector_lab.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\vector_lab.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_lab.dir/build: vector_lab.exe
.PHONY : CMakeFiles/vector_lab.dir/build

CMakeFiles/vector_lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\vector_lab.dir\cmake_clean.cmake
.PHONY : CMakeFiles/vector_lab.dir/clean

CMakeFiles/vector_lab.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\clion projects\vector_lab" "E:\clion projects\vector_lab" "E:\clion projects\vector_lab\cmake-build-debug" "E:\clion projects\vector_lab\cmake-build-debug" "E:\clion projects\vector_lab\cmake-build-debug\CMakeFiles\vector_lab.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/vector_lab.dir/depend


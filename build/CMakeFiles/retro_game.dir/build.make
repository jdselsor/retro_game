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
CMAKE_SOURCE_DIR = /home/jdselsor/Projects/Files/retro_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jdselsor/Projects/Files/retro_game/build

# Include any dependencies generated for this target.
include CMakeFiles/retro_game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/retro_game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/retro_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/retro_game.dir/flags.make

CMakeFiles/retro_game.dir/src/application.cpp.o: CMakeFiles/retro_game.dir/flags.make
CMakeFiles/retro_game.dir/src/application.cpp.o: ../src/application.cpp
CMakeFiles/retro_game.dir/src/application.cpp.o: CMakeFiles/retro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jdselsor/Projects/Files/retro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/retro_game.dir/src/application.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/retro_game.dir/src/application.cpp.o -MF CMakeFiles/retro_game.dir/src/application.cpp.o.d -o CMakeFiles/retro_game.dir/src/application.cpp.o -c /home/jdselsor/Projects/Files/retro_game/src/application.cpp

CMakeFiles/retro_game.dir/src/application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/retro_game.dir/src/application.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jdselsor/Projects/Files/retro_game/src/application.cpp > CMakeFiles/retro_game.dir/src/application.cpp.i

CMakeFiles/retro_game.dir/src/application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/retro_game.dir/src/application.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jdselsor/Projects/Files/retro_game/src/application.cpp -o CMakeFiles/retro_game.dir/src/application.cpp.s

CMakeFiles/retro_game.dir/src/main.cpp.o: CMakeFiles/retro_game.dir/flags.make
CMakeFiles/retro_game.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/retro_game.dir/src/main.cpp.o: CMakeFiles/retro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jdselsor/Projects/Files/retro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/retro_game.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/retro_game.dir/src/main.cpp.o -MF CMakeFiles/retro_game.dir/src/main.cpp.o.d -o CMakeFiles/retro_game.dir/src/main.cpp.o -c /home/jdselsor/Projects/Files/retro_game/src/main.cpp

CMakeFiles/retro_game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/retro_game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jdselsor/Projects/Files/retro_game/src/main.cpp > CMakeFiles/retro_game.dir/src/main.cpp.i

CMakeFiles/retro_game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/retro_game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jdselsor/Projects/Files/retro_game/src/main.cpp -o CMakeFiles/retro_game.dir/src/main.cpp.s

# Object files for target retro_game
retro_game_OBJECTS = \
"CMakeFiles/retro_game.dir/src/application.cpp.o" \
"CMakeFiles/retro_game.dir/src/main.cpp.o"

# External object files for target retro_game
retro_game_EXTERNAL_OBJECTS =

retro_game: CMakeFiles/retro_game.dir/src/application.cpp.o
retro_game: CMakeFiles/retro_game.dir/src/main.cpp.o
retro_game: CMakeFiles/retro_game.dir/build.make
retro_game: /usr/lib/x86_64-linux-gnu/libSDL2main.a
retro_game: /usr/lib/x86_64-linux-gnu/libSDL2.so
retro_game: CMakeFiles/retro_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jdselsor/Projects/Files/retro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable retro_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/retro_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/retro_game.dir/build: retro_game
.PHONY : CMakeFiles/retro_game.dir/build

CMakeFiles/retro_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/retro_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/retro_game.dir/clean

CMakeFiles/retro_game.dir/depend:
	cd /home/jdselsor/Projects/Files/retro_game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jdselsor/Projects/Files/retro_game /home/jdselsor/Projects/Files/retro_game /home/jdselsor/Projects/Files/retro_game/build /home/jdselsor/Projects/Files/retro_game/build /home/jdselsor/Projects/Files/retro_game/build/CMakeFiles/retro_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/retro_game.dir/depend


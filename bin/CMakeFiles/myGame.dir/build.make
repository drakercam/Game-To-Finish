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
CMAKE_SOURCE_DIR = /home/draker/personal_projects/game_to_complete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/draker/personal_projects/game_to_complete/bin

# Include any dependencies generated for this target.
include CMakeFiles/myGame.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myGame.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myGame.dir/flags.make

CMakeFiles/myGame.dir/src/main.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/myGame.dir/src/main.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myGame.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/main.cpp.o -MF CMakeFiles/myGame.dir/src/main.cpp.o.d -o CMakeFiles/myGame.dir/src/main.cpp.o -c /home/draker/personal_projects/game_to_complete/src/main.cpp

CMakeFiles/myGame.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/main.cpp > CMakeFiles/myGame.dir/src/main.cpp.i

CMakeFiles/myGame.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/main.cpp -o CMakeFiles/myGame.dir/src/main.cpp.s

CMakeFiles/myGame.dir/src/StateMachine.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/StateMachine.cpp.o: ../src/StateMachine.cpp
CMakeFiles/myGame.dir/src/StateMachine.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myGame.dir/src/StateMachine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/StateMachine.cpp.o -MF CMakeFiles/myGame.dir/src/StateMachine.cpp.o.d -o CMakeFiles/myGame.dir/src/StateMachine.cpp.o -c /home/draker/personal_projects/game_to_complete/src/StateMachine.cpp

CMakeFiles/myGame.dir/src/StateMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/StateMachine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/StateMachine.cpp > CMakeFiles/myGame.dir/src/StateMachine.cpp.i

CMakeFiles/myGame.dir/src/StateMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/StateMachine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/StateMachine.cpp -o CMakeFiles/myGame.dir/src/StateMachine.cpp.s

CMakeFiles/myGame.dir/src/AssetsManager.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/AssetsManager.cpp.o: ../src/AssetsManager.cpp
CMakeFiles/myGame.dir/src/AssetsManager.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myGame.dir/src/AssetsManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/AssetsManager.cpp.o -MF CMakeFiles/myGame.dir/src/AssetsManager.cpp.o.d -o CMakeFiles/myGame.dir/src/AssetsManager.cpp.o -c /home/draker/personal_projects/game_to_complete/src/AssetsManager.cpp

CMakeFiles/myGame.dir/src/AssetsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/AssetsManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/AssetsManager.cpp > CMakeFiles/myGame.dir/src/AssetsManager.cpp.i

CMakeFiles/myGame.dir/src/AssetsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/AssetsManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/AssetsManager.cpp -o CMakeFiles/myGame.dir/src/AssetsManager.cpp.s

CMakeFiles/myGame.dir/src/InputManager.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/InputManager.cpp.o: ../src/InputManager.cpp
CMakeFiles/myGame.dir/src/InputManager.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myGame.dir/src/InputManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/InputManager.cpp.o -MF CMakeFiles/myGame.dir/src/InputManager.cpp.o.d -o CMakeFiles/myGame.dir/src/InputManager.cpp.o -c /home/draker/personal_projects/game_to_complete/src/InputManager.cpp

CMakeFiles/myGame.dir/src/InputManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/InputManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/InputManager.cpp > CMakeFiles/myGame.dir/src/InputManager.cpp.i

CMakeFiles/myGame.dir/src/InputManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/InputManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/InputManager.cpp -o CMakeFiles/myGame.dir/src/InputManager.cpp.s

CMakeFiles/myGame.dir/src/Game.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/Game.cpp.o: ../src/Game.cpp
CMakeFiles/myGame.dir/src/Game.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myGame.dir/src/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/Game.cpp.o -MF CMakeFiles/myGame.dir/src/Game.cpp.o.d -o CMakeFiles/myGame.dir/src/Game.cpp.o -c /home/draker/personal_projects/game_to_complete/src/Game.cpp

CMakeFiles/myGame.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/Game.cpp > CMakeFiles/myGame.dir/src/Game.cpp.i

CMakeFiles/myGame.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/Game.cpp -o CMakeFiles/myGame.dir/src/Game.cpp.s

CMakeFiles/myGame.dir/src/SplashState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/SplashState.cpp.o: ../src/SplashState.cpp
CMakeFiles/myGame.dir/src/SplashState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myGame.dir/src/SplashState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/SplashState.cpp.o -MF CMakeFiles/myGame.dir/src/SplashState.cpp.o.d -o CMakeFiles/myGame.dir/src/SplashState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/SplashState.cpp

CMakeFiles/myGame.dir/src/SplashState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/SplashState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/SplashState.cpp > CMakeFiles/myGame.dir/src/SplashState.cpp.i

CMakeFiles/myGame.dir/src/SplashState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/SplashState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/SplashState.cpp -o CMakeFiles/myGame.dir/src/SplashState.cpp.s

CMakeFiles/myGame.dir/src/MainMenuState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/MainMenuState.cpp.o: ../src/MainMenuState.cpp
CMakeFiles/myGame.dir/src/MainMenuState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/myGame.dir/src/MainMenuState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/MainMenuState.cpp.o -MF CMakeFiles/myGame.dir/src/MainMenuState.cpp.o.d -o CMakeFiles/myGame.dir/src/MainMenuState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/MainMenuState.cpp

CMakeFiles/myGame.dir/src/MainMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/MainMenuState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/MainMenuState.cpp > CMakeFiles/myGame.dir/src/MainMenuState.cpp.i

CMakeFiles/myGame.dir/src/MainMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/MainMenuState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/MainMenuState.cpp -o CMakeFiles/myGame.dir/src/MainMenuState.cpp.s

CMakeFiles/myGame.dir/src/GameState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/GameState.cpp.o: ../src/GameState.cpp
CMakeFiles/myGame.dir/src/GameState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/myGame.dir/src/GameState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/GameState.cpp.o -MF CMakeFiles/myGame.dir/src/GameState.cpp.o.d -o CMakeFiles/myGame.dir/src/GameState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/GameState.cpp

CMakeFiles/myGame.dir/src/GameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/GameState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/GameState.cpp > CMakeFiles/myGame.dir/src/GameState.cpp.i

CMakeFiles/myGame.dir/src/GameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/GameState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/GameState.cpp -o CMakeFiles/myGame.dir/src/GameState.cpp.s

CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o: ../src/PauseMenuState.cpp
CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o -MF CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o.d -o CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/PauseMenuState.cpp

CMakeFiles/myGame.dir/src/PauseMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/PauseMenuState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/PauseMenuState.cpp > CMakeFiles/myGame.dir/src/PauseMenuState.cpp.i

CMakeFiles/myGame.dir/src/PauseMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/PauseMenuState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/PauseMenuState.cpp -o CMakeFiles/myGame.dir/src/PauseMenuState.cpp.s

CMakeFiles/myGame.dir/src/GameObject.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/GameObject.cpp.o: ../src/GameObject.cpp
CMakeFiles/myGame.dir/src/GameObject.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/myGame.dir/src/GameObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/GameObject.cpp.o -MF CMakeFiles/myGame.dir/src/GameObject.cpp.o.d -o CMakeFiles/myGame.dir/src/GameObject.cpp.o -c /home/draker/personal_projects/game_to_complete/src/GameObject.cpp

CMakeFiles/myGame.dir/src/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/GameObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/GameObject.cpp > CMakeFiles/myGame.dir/src/GameObject.cpp.i

CMakeFiles/myGame.dir/src/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/GameObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/GameObject.cpp -o CMakeFiles/myGame.dir/src/GameObject.cpp.s

CMakeFiles/myGame.dir/src/PlayerObject.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/PlayerObject.cpp.o: ../src/PlayerObject.cpp
CMakeFiles/myGame.dir/src/PlayerObject.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/myGame.dir/src/PlayerObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/PlayerObject.cpp.o -MF CMakeFiles/myGame.dir/src/PlayerObject.cpp.o.d -o CMakeFiles/myGame.dir/src/PlayerObject.cpp.o -c /home/draker/personal_projects/game_to_complete/src/PlayerObject.cpp

CMakeFiles/myGame.dir/src/PlayerObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/PlayerObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/PlayerObject.cpp > CMakeFiles/myGame.dir/src/PlayerObject.cpp.i

CMakeFiles/myGame.dir/src/PlayerObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/PlayerObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/PlayerObject.cpp -o CMakeFiles/myGame.dir/src/PlayerObject.cpp.s

CMakeFiles/myGame.dir/src/AreaOneState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/AreaOneState.cpp.o: ../src/AreaOneState.cpp
CMakeFiles/myGame.dir/src/AreaOneState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/myGame.dir/src/AreaOneState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/AreaOneState.cpp.o -MF CMakeFiles/myGame.dir/src/AreaOneState.cpp.o.d -o CMakeFiles/myGame.dir/src/AreaOneState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/AreaOneState.cpp

CMakeFiles/myGame.dir/src/AreaOneState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/AreaOneState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/AreaOneState.cpp > CMakeFiles/myGame.dir/src/AreaOneState.cpp.i

CMakeFiles/myGame.dir/src/AreaOneState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/AreaOneState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/AreaOneState.cpp -o CMakeFiles/myGame.dir/src/AreaOneState.cpp.s

CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o: ../src/AreaTwoState.cpp
CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o -MF CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o.d -o CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/AreaTwoState.cpp

CMakeFiles/myGame.dir/src/AreaTwoState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/AreaTwoState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/AreaTwoState.cpp > CMakeFiles/myGame.dir/src/AreaTwoState.cpp.i

CMakeFiles/myGame.dir/src/AreaTwoState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/AreaTwoState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/AreaTwoState.cpp -o CMakeFiles/myGame.dir/src/AreaTwoState.cpp.s

CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o: ../src/AreaThreeState.cpp
CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o -MF CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o.d -o CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/AreaThreeState.cpp

CMakeFiles/myGame.dir/src/AreaThreeState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/AreaThreeState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/AreaThreeState.cpp > CMakeFiles/myGame.dir/src/AreaThreeState.cpp.i

CMakeFiles/myGame.dir/src/AreaThreeState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/AreaThreeState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/AreaThreeState.cpp -o CMakeFiles/myGame.dir/src/AreaThreeState.cpp.s

CMakeFiles/myGame.dir/src/AreaFourState.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/AreaFourState.cpp.o: ../src/AreaFourState.cpp
CMakeFiles/myGame.dir/src/AreaFourState.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/myGame.dir/src/AreaFourState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/AreaFourState.cpp.o -MF CMakeFiles/myGame.dir/src/AreaFourState.cpp.o.d -o CMakeFiles/myGame.dir/src/AreaFourState.cpp.o -c /home/draker/personal_projects/game_to_complete/src/AreaFourState.cpp

CMakeFiles/myGame.dir/src/AreaFourState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/AreaFourState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/AreaFourState.cpp > CMakeFiles/myGame.dir/src/AreaFourState.cpp.i

CMakeFiles/myGame.dir/src/AreaFourState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/AreaFourState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/AreaFourState.cpp -o CMakeFiles/myGame.dir/src/AreaFourState.cpp.s

CMakeFiles/myGame.dir/src/GameBorders.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/GameBorders.cpp.o: ../src/GameBorders.cpp
CMakeFiles/myGame.dir/src/GameBorders.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/myGame.dir/src/GameBorders.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/GameBorders.cpp.o -MF CMakeFiles/myGame.dir/src/GameBorders.cpp.o.d -o CMakeFiles/myGame.dir/src/GameBorders.cpp.o -c /home/draker/personal_projects/game_to_complete/src/GameBorders.cpp

CMakeFiles/myGame.dir/src/GameBorders.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/GameBorders.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/GameBorders.cpp > CMakeFiles/myGame.dir/src/GameBorders.cpp.i

CMakeFiles/myGame.dir/src/GameBorders.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/GameBorders.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/GameBorders.cpp -o CMakeFiles/myGame.dir/src/GameBorders.cpp.s

CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o: CMakeFiles/myGame.dir/flags.make
CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o: ../src/CollectibleObject.cpp
CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o: CMakeFiles/myGame.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o -MF CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o.d -o CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o -c /home/draker/personal_projects/game_to_complete/src/CollectibleObject.cpp

CMakeFiles/myGame.dir/src/CollectibleObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myGame.dir/src/CollectibleObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/draker/personal_projects/game_to_complete/src/CollectibleObject.cpp > CMakeFiles/myGame.dir/src/CollectibleObject.cpp.i

CMakeFiles/myGame.dir/src/CollectibleObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myGame.dir/src/CollectibleObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/draker/personal_projects/game_to_complete/src/CollectibleObject.cpp -o CMakeFiles/myGame.dir/src/CollectibleObject.cpp.s

# Object files for target myGame
myGame_OBJECTS = \
"CMakeFiles/myGame.dir/src/main.cpp.o" \
"CMakeFiles/myGame.dir/src/StateMachine.cpp.o" \
"CMakeFiles/myGame.dir/src/AssetsManager.cpp.o" \
"CMakeFiles/myGame.dir/src/InputManager.cpp.o" \
"CMakeFiles/myGame.dir/src/Game.cpp.o" \
"CMakeFiles/myGame.dir/src/SplashState.cpp.o" \
"CMakeFiles/myGame.dir/src/MainMenuState.cpp.o" \
"CMakeFiles/myGame.dir/src/GameState.cpp.o" \
"CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o" \
"CMakeFiles/myGame.dir/src/GameObject.cpp.o" \
"CMakeFiles/myGame.dir/src/PlayerObject.cpp.o" \
"CMakeFiles/myGame.dir/src/AreaOneState.cpp.o" \
"CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o" \
"CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o" \
"CMakeFiles/myGame.dir/src/AreaFourState.cpp.o" \
"CMakeFiles/myGame.dir/src/GameBorders.cpp.o" \
"CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o"

# External object files for target myGame
myGame_EXTERNAL_OBJECTS =

myGame: CMakeFiles/myGame.dir/src/main.cpp.o
myGame: CMakeFiles/myGame.dir/src/StateMachine.cpp.o
myGame: CMakeFiles/myGame.dir/src/AssetsManager.cpp.o
myGame: CMakeFiles/myGame.dir/src/InputManager.cpp.o
myGame: CMakeFiles/myGame.dir/src/Game.cpp.o
myGame: CMakeFiles/myGame.dir/src/SplashState.cpp.o
myGame: CMakeFiles/myGame.dir/src/MainMenuState.cpp.o
myGame: CMakeFiles/myGame.dir/src/GameState.cpp.o
myGame: CMakeFiles/myGame.dir/src/PauseMenuState.cpp.o
myGame: CMakeFiles/myGame.dir/src/GameObject.cpp.o
myGame: CMakeFiles/myGame.dir/src/PlayerObject.cpp.o
myGame: CMakeFiles/myGame.dir/src/AreaOneState.cpp.o
myGame: CMakeFiles/myGame.dir/src/AreaTwoState.cpp.o
myGame: CMakeFiles/myGame.dir/src/AreaThreeState.cpp.o
myGame: CMakeFiles/myGame.dir/src/AreaFourState.cpp.o
myGame: CMakeFiles/myGame.dir/src/GameBorders.cpp.o
myGame: CMakeFiles/myGame.dir/src/CollectibleObject.cpp.o
myGame: CMakeFiles/myGame.dir/build.make
myGame: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
myGame: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
myGame: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
myGame: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
myGame: CMakeFiles/myGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/draker/personal_projects/game_to_complete/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable myGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myGame.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_directory /home/draker/personal_projects/game_to_complete/Resources /home/draker/personal_projects/game_to_complete/bin/Resources

# Rule to build all files generated by this target.
CMakeFiles/myGame.dir/build: myGame
.PHONY : CMakeFiles/myGame.dir/build

CMakeFiles/myGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myGame.dir/clean

CMakeFiles/myGame.dir/depend:
	cd /home/draker/personal_projects/game_to_complete/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/draker/personal_projects/game_to_complete /home/draker/personal_projects/game_to_complete /home/draker/personal_projects/game_to_complete/bin /home/draker/personal_projects/game_to_complete/bin /home/draker/personal_projects/game_to_complete/bin/CMakeFiles/myGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myGame.dir/depend


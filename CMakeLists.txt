cmake_minimum_required(VERSION 3.10)
project(myGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML
find_package(SFML 2.5.1 REQUIRED COMPONENTS graphics window system audio)
include_directories(${CMAKE_SOURCE_DIR}/src ${SFML_INCLUDE_DIR})

# Add all source files
set(SOURCES
    src/main.cpp
    src/StateMachine.cpp
    src/AssetsManager.cpp
    src/InputManager.cpp
    src/Game.cpp
    src/SplashState.cpp
    src/MainMenuState.cpp
    src/GameState.cpp
    src/PauseMenuState.cpp
    src/GameObject.cpp
    src/PlayerObject.cpp
    src/AreaOneState.cpp
    src/AreaTwoState.cpp
    src/AreaThreeState.cpp
    src/AreaFourState.cpp
    src/GameBorders.cpp
    src/CollectibleObject.cpp
)

set(HEADERS
    src/StateMachine.hpp
    src/State.hpp
    src/AssetsManager.hpp
    src/InputManager.hpp
    src/Game.hpp
    src/SETTINGS.hpp
    src/SplashState.hpp
    src/MainMenuState.hpp
    src/GameState.hpp
    src/PauseMenuState.hpp
    src/GameObject.hpp
    src/PlayerObject.hpp
    src/AreaOneState.hpp
    src/AreaTwoState.hpp
    src/AreaThreeState.hpp
    src/AreaFourState.hpp
    src/GameBorders.hpp
    src/CollectibleObject.hpp
)

# Create executable
add_executable(myGame ${SOURCES} ${HEADERS})

# CMakeLists.txt
add_custom_command(TARGET myGame POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/Resources
    $<TARGET_FILE_DIR:myGame>/Resources
)

# Link SFML libraries
target_link_libraries(myGame PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)

cmake_minimum_required(VERSION 3.10)
project(something)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML
find_package(SFML 2.5.1 REQUIRED COMPONENTS graphics window system audio)
include_directories(${SFML_INCLUDE_DIR})

# Add all source files
set(SOURCES
    main.cpp
    StateMachine.cpp
    AssetsManager.cpp
    InputManager.cpp
    Game.cpp
    SplashState.cpp
    MainMenuState.cpp
    GameState.cpp
    PauseMenuState.cpp
)

set(HEADERS
    StateMachine.hpp
    State.hpp
    AssetsManager.hpp
    InputManager.hpp
    Game.hpp
    SETTINGS.hpp
    SplashState.hpp
    MainMenuState.hpp
    GameState.hpp
    PauseMenuState.hpp
)

# Create executable
add_executable(something ${SOURCES} ${HEADERS})

# CMakeLists.txt
add_custom_command(TARGET something POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/Resources
    $<TARGET_FILE_DIR:something>/Resources
)

# Link SFML libraries
target_link_libraries(something PRIVATE sfml-graphics sfml-window sfml-system sfml-audio)

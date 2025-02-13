# Project Details

Language: C++
Libraries: SFML 2.5.1
Build Tool: CMake
Developed On: Linux

# TO BUILD
To build and run this project, make sure you have the necessary libraries installed (SFML 2.5.1). Clone the repository to your directory of choice and create a bin folder in the projects folder. then enter the following commands:
1. cd bin/
2. cmake ..
3. make
4. ./myGame
And enjoy the project! (I know its not much right now, but im trying to learn more and more about SFML and C++ in particular so I use this to practice as well as complete a game I truly wanna make)

# Project Idea

At this stage currently, the project is very bare bones and not really much too it. My final vision for the game is to have it be a hack and slash kind of experience in where there are 4 hostile filled areas each containing loot in which the player desires to get so they can fund their way out of the area. I want there to be a vendor, in which will allow the player to sell these collected items for money which in turn can be used to fund either powerups, increased offense / defense, new weapons, and more. The player is not expected to simply defeat all four areas and then they win the game. The player will have to go through two iterations of the challenge areas, with the second time allowing for the player to approach with a refined strategy, new weapons, a specific build, and/or a fresh mindset, all of which will grant the player another journey through the areas but with tougher enemies, new enemy types and patterns. New minerals to sells, and a final boss room will appear after clearing area four for the second time.

This is just the idea I have for the game currently, it could change but these are various game development concepts I want to explore and learn upon for future projects, especially inventory tracking and dialogue with a merchant npc. Below is a list of current features in the game and what I plan to implement next.

# Current Features

1. Main menu and splash screen to introduce the player to me, the developer.
2. Rooms in which the player can freely travel between with proper border collisions and player sprite animations.
3. Movement of player via the WASD keys
4. A pause menu with a fully functioning Exit and Resume button that returns the player right back to the previous game state.

# Whats next?

1. I plan to firstly add and modularize the collectible game objects I will implement. Current ideas for various minerals to collect are: diamonds, rubys, emeralds, sapphires, quartz, gold, copper, and iron.
2. The next feature I plan to implement are a structure for a enemy game object and creature four different enemy types that will spawn in each area for now, each with their own movement and attack patterns.
3. Then I will implement the npc merchant that will give basic dialogue to the player.
4. After implementing the dialogue, I will connect it with a new menu state in which the player can upgrade various stats and such and/or sell their minerals for currency.
5. Finally after having that all implemented, I will implement a system that will adjust various enemy stats and enemy spawn rates and what not to facilitize a harder ingame challenge and make tweaks where needed.
6. After both game iterations are fully functioning and the game is in a playable and good state, I will then work on implementing the games ending in which the player will face the final boss (undecided on what the final boss is) and incorporate some sort of ending cutscene thanking the player and providing a sense of accomplishment and completion to the player for playing the game.

# BONUS
1. If completed all of the above, I will try to implement an intro cutscene between the main menu and entering the game to develop a story and motivation to the player to continue playing.
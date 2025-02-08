# Project Details

Language: C++
Libraries: SFML 2.5.1
Build Tool: CMake
Developed On: Linux

# Project Idea

This is an early prototype for a item collecting game I am creating. I want to implement various enemies in the (soon to be) for available areas that fight the player to stop them from collecting resources. These resources can then be brought back to the main area to sell which with this money you can upgrade various player stats such as: Health, Physical Damage, Armor, Projectile Damage, Defense

Now since this is such an early protype the idea for the game might change, but the core aspects is I want to implement item collecting, shop vending, and some sort of upgrade system.

My plan is to upload this game to itch.io as my very first solo published game

# TODO

1. Create proper player walking animations for left, right, up and down.
2. Load in textures for the main area, as well as the for each game area
3. Create enemies that will spawn in each area. Each enemy will be specific to that area and will guard a specific item/collectible native to that area
4. Implement enemy wandering and path finding algorithms
4. Implement collectibles and ability for player to collect them
5. Implement UI for player health, and inventory to showcase collected items (just add 4 types for now but make it extendable, i.e easier to add more if wanted)
6. Implement a shop keep that resides in the main area where you can trade your collect items for various rewards
7. Implement an upgrade system to use the rewards to upgrade various player stats.
8. Implement a player sprite animation for swinging a sword as well as create a sword hitbox to detect hitting an enemy
9. Overhaul pause and start menu (i kinda like the splash state for now but probably will overhaul)
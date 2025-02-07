#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "player_game_object.hpp"
#include "GameBorders.hpp"
#include "Game.hpp"
#include <vector>

namespace Draker {

    class GameState : public State {
        public:
            GameState(GameDataRef data);
            ~GameState();

            void Init();

            void HandleInput();
            void Update(float dt);
            void Draw(float dt);

        private:
            GameDataRef data_;

            sf::Sprite background_;
            sf::Sprite pauseButton_;
            sf::Sprite playerSprite_;
            PlayerObject* player;
            GameBorders* borders;

            int gameState;
            bool areaOne;
            bool areaTwo;

            void DrawTileGrid();

            void changeArea();
    };  
}
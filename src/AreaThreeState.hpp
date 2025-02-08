#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "PlayerObject.hpp"
#include "Game.hpp"
#include "GameBorders.hpp"
#include "GameState.hpp"

namespace Draker {

    class AreaThree : public State {
        public:
            AreaThree(GameDataRef data);
            ~AreaThree();

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

            int gameState;

            bool mainArea;

            void DrawTileGrid();
    };  
}
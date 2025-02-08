#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "PlayerObject.hpp"
#include "Game.hpp"
#include "GameBorders.hpp"
#include "GameState.hpp"

namespace Draker {

    class AreaFour : public State {
        public:
            AreaFour(GameDataRef data);
            ~AreaFour();

            void Init();

            void HandleInput();
            void Update(float dt);
            void Draw(float dt);
            void createAreas();
            void setPauseButtonLoc();

        private:
            GameDataRef data_;

            sf::Sprite background_;

            sf::Sprite pauseButton_;

            sf::Sprite playerSprite_;

            PlayerObject* player;
            GameBorders* borders;

            sf::RectangleShape mainArea;

            const float verticalWidth = 8.f;
            const float verticalHeight = 48.f;
            const float horizontalWidth = 48.f;
            const float horizontalHeight = 8.f;

            int gameState;
            void changeArea();
            void DrawTileGrid();
    };  
}
#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "PlayerObject.hpp"
#include "Game.hpp"
#include "GameBorders.hpp"
#include "GameState.hpp"

namespace Draker {

    class AreaTwo : public State {
        public:
            AreaTwo(GameDataRef data);
            ~AreaTwo();

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

            sf::RectangleShape mainArea;

            const float verticalWidth = 8.f;
            const float verticalHeight = 48.f;
            const float horizontalWidth = 48.f;
            const float horizontalHeight = 8.f;

            int gameState;
            void changeArea();
            void DrawTileGrid();
            void createAreas();
            void setPauseButtonLoc();
    };  
}
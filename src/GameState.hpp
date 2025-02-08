#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "PlayerObject.hpp"
#include "GameBorders.hpp"
#include "PauseMenuState.hpp"
#include "AreaOneState.hpp"
#include "AreaTwoState.hpp"
#include "AreaThreeState.hpp"
#include "AreaFourState.hpp"
#include "SETTINGS.hpp"
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
            void createAreas();
            void setPauseButtonLoc();

        private:
            GameDataRef data_;

            sf::Sprite background_;
            sf::Sprite pauseButton_;
            sf::Sprite playerSprite_;
            PlayerObject* player;
            GameBorders* borders;

            sf::RectangleShape areaOne;
            sf::RectangleShape areaTwo;
            sf::RectangleShape areaThree;
            sf::RectangleShape areaFour;

            const float verticalWidth = 8.f;
            const float verticalHeight = 48.f;
            const float horizontalWidth = 48.f;
            const float horizontalHeight = 8.f;
            
            int gameState;
            void changeArea();
            void DrawTileGrid();
    };  
}
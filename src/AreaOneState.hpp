#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "PlayerObject.hpp"
#include "CollectibleObject.hpp"
#include "Game.hpp"
#include "GameBorders.hpp"
#include "GameState.hpp"
#include "PauseMenuState.hpp"
#include "SETTINGS.hpp"

namespace Draker {

    class AreaOne : public State {
        public:
            AreaOne(GameDataRef data);
            ~AreaOne();

            void Init();

            void HandleInput();
            void Update(float dt);
            void Draw(float dt);

            int numCollectibles() { return collectibles; }

        private:
            GameDataRef data_;

            sf::Sprite background_;

            sf::Sprite pauseButton_;

            sf::Sprite playerSprite_;

            sf::Sprite goldSprite_;

            PlayerObject* player;
            GameBorders* borders;
            std::vector<CollectibleObject*> gold;
            bool isDrawn_ = false;

            int collectibles = 0;

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
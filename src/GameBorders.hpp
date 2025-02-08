#pragma once

#include <SFML/Graphics.hpp>
#include <algorithm>
#include "PlayerObject.hpp"
#include "SETTINGS.hpp"

namespace Draker {
    class GameBorders {
        public:
            GameBorders();

            void checkBorders(PlayerObject* player);

            sf::FloatRect getLeftBorder() const   { return leftBorder; }
            sf::FloatRect getRightBorder() const  { return rightBorder; }
            sf::FloatRect getTopBorder() const    { return topBorder; }
            sf::FloatRect getBottomBorder() const { return bottomBorder; }

        private:
            void Init();
            sf::FloatRect leftBorder;
            sf::FloatRect rightBorder;
            sf::FloatRect topBorder;
            sf::FloatRect bottomBorder;
    };
}
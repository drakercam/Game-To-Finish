#pragma once

#include <SFML/Graphics.hpp>
#include "player_game_object.hpp"

namespace Draker {
    class GameBorders {
        public:
            GameBorders();

            void checkArea(PlayerObject *player, bool &area1, bool &area2);

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
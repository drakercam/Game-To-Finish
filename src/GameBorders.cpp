#include "GameBorders.hpp"

namespace Draker {
    GameBorders::GameBorders() {
        Init();
    }

    void GameBorders::checkArea(PlayerObject *player, bool &area1, bool &area2) {
        sf::FloatRect playerBounds = player->getSprite().getGlobalBounds();

        if (playerBounds.intersects(leftBorder)) {
            area1 = true;
            std::cout << "Collided with left border" << std::endl;
        }

        else if (playerBounds.intersects(rightBorder)) {
            area2 = true;
            std::cout << "Collided with right border" << std::endl;
        }

        else if (playerBounds.intersects(topBorder)) {
            // tbi
            std::cout << "Collided with top border" << std::endl;
        }

        else if (playerBounds.intersects(bottomBorder)) {
            //tbi
            std::cout << "Collided with bottom border" << std::endl;
        }
        else {
            area1 = false;
            area2 = false;
        }
    }

    void GameBorders::Init() {
        leftBorder = sf::FloatRect(0.f, 0.f, 1.f, static_cast<float>(SCREEN_HEIGHT));
        rightBorder = sf::FloatRect(SCREEN_WIDTH - 1.f, 0.f, 1.f, static_cast<float>(SCREEN_HEIGHT));
        topBorder = sf::FloatRect(0.f, 0.f, static_cast<float>(SCREEN_WIDTH), 1.f);
        bottomBorder = sf::FloatRect(0.f, SCREEN_HEIGHT - 1.f, static_cast<float>(SCREEN_WIDTH), 1.f);
    }

}
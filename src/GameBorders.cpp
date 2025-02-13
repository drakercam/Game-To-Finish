#include "GameBorders.hpp"

namespace Draker {
    GameBorders::GameBorders() {
        Init();
    }

    void GameBorders::checkBorders(PlayerObject* player) {
        sf::Vector2f playerPosition = player->getPosition();
        sf::FloatRect playerBounds = player->getSprite().getGlobalBounds();

        float min_X = 0.0f;
        float max_X = SCREEN_WIDTH - 0.75 * playerBounds.width;
        float min_Y = 0.0f;
        float max_Y = SCREEN_HEIGHT - 0.75 * playerBounds.height;

        player->setPosition(sf::Vector2f(std::clamp(playerPosition.x, min_X, max_X),
                                         std::clamp(playerPosition.y, min_Y, max_Y - 8.0f)));
    }

    void GameBorders::Init() {
        leftBorder = sf::FloatRect(0.f, 0.f, 1.f, static_cast<float>(SCREEN_HEIGHT));
        rightBorder = sf::FloatRect(SCREEN_WIDTH - 1.f, 0.f, 1.f, static_cast<float>(SCREEN_HEIGHT));
        topBorder = sf::FloatRect(0.f, 0.f, static_cast<float>(SCREEN_WIDTH), 1.f);
        bottomBorder = sf::FloatRect(0.f, SCREEN_HEIGHT - 1.f, static_cast<float>(SCREEN_WIDTH), 1.f);
    }

}
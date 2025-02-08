#include "InputManager.hpp"

namespace Draker {

    bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window) {
        if (sf::Mouse::isButtonPressed(button)) {
            // Get the mouse position in window (pixel) coordinates.
            sf::Vector2i mousePixelPos = sf::Mouse::getPosition(window);
            // Convert pixel coordinates to world coordinates based on the current view.
            sf::Vector2f mouseWorldPos = window.mapPixelToCoords(mousePixelPos, window.getView());

            if (object.getGlobalBounds().contains(mouseWorldPos)) {
                return true;
            }
        }
        return false;
    }

    sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window) {
        return sf::Mouse::getPosition(window);
    }
}
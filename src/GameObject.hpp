#pragma once

#include <SFML/Graphics.hpp>
#include "SETTINGS.hpp"
#include "Game.hpp"
#include <cmath>
#include <iostream>


namespace Draker {
    class GameObject {
        public:
            virtual void Init(sf::Sprite sprite, float x, float y) { }
            virtual void Update(float dt) { }
            virtual void Draw(sf::RenderWindow &window) { }
    };
}
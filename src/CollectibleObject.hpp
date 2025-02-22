#pragma once

#include <SFML/Graphics.hpp>
#include <random>
#include "GameObject.hpp"
#include "SETTINGS.hpp"

namespace Draker {
    class CollectibleObject : public GameObject {
        private:
            sf::Sprite sprite_;
            sf::Vector2f position_;
            void Init(sf::Sprite sprite);
    
        public:
            CollectibleObject(sf::Sprite sprite);
            ~CollectibleObject();
            void Update(float dt);
            void Draw(sf::RenderWindow &window);
    };
}
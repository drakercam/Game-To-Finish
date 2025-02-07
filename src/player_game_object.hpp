#pragma once

#include "game_object.hpp"

namespace Draker {
    class PlayerObject : public GameObject {
        private:
            float maxVelocity = 25.0f;
            float velocityIncrement = 2.5f;
            sf::Sprite sprite_;
            sf::Vector2f position_;
            sf::Vector2f velocity_;
            void Move(float dt);
            void Init(sf::Sprite sprite) override;
    
        public:
            PlayerObject(sf::Sprite sprite);
            void Update(float dt) override;
            void Draw(sf::RenderWindow &window) override;
            void Collide();
            sf::Sprite getSprite() { return sprite_; }
    };
}
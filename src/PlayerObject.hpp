#pragma once

#include "GameObject.hpp"

namespace Draker {
    class PlayerObject : public GameObject {
        private:
            float maxVelocity = 25.0f;
            float velocityIncrement = 2.5f;
            sf::Sprite sprite_;
            sf::Vector2f position_;
            sf::Vector2f velocity_;
            bool isColliding_;
            void Move(float dt);
            void Init(sf::Sprite sprite) override;
    
        public:
            PlayerObject(sf::Sprite sprite);
            void Update(float dt) override;
            void Draw(sf::RenderWindow &window) override;
            sf::Sprite getSprite() const { return sprite_; }
            sf::Vector2f getPosition() const { return position_; }
            bool getColliding() const { return isColliding_; }
            void setColliding(bool colliding) { isColliding_ = colliding; }
            void setPosition(sf::Vector2f pos) { position_ = pos; }
    };
}
#pragma once

#include "GameObject.hpp"
#include "Game.hpp"
#include <algorithm>

namespace Draker {
    class PlayerObject : public GameObject {
        private:
            float maxVelocity = 5.0f;
            float velocityIncrement = 0.2f;
            sf::Sprite sprite_;
            sf::Vector2f position_;
            sf::Vector2f velocity_;

            void Move(float dt);
            void Init(sf::Sprite sprite, float x, float y) override;
            void updateCamera();
            sf::View playerCamera;
            const float cameraWidth = 320.0f;
            const float cameraHeight = 240.0f;
    
        public:
            PlayerObject(sf::Sprite sprite, float x, float y);
            void Update(float dt) override;
            void Draw(sf::RenderWindow &window) override;
            sf::Sprite getSprite() const { return sprite_; }
            sf::Vector2f getPosition() const { return position_; }
            void setPosition(sf::Vector2f pos) { position_ = pos; }
            sf::View getCamera() { return playerCamera; }
    };
}
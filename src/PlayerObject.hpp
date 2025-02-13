#pragma once

#include "GameObject.hpp"
#include "Game.hpp"
#include <SFML/System/Clock.hpp>
#include <algorithm>

namespace Draker {
    class PlayerObject : public GameObject {
        private:
            float maxVelocity = 5.0f;
            float velocityIncrement = 0.2f;
            sf::Sprite sprite_;
            sf::Texture texture_;
            sf::Vector2f position_;
            sf::Vector2f velocity_;
            sf::Clock animationClock_;
            sf::RectangleShape playerBounds;
            sf::IntRect frameRect_;

            std::string direction_;

            void Move(float dt);
            void Init(sf::Sprite sprite, float x, float y) override;
            void updateCamera();
            void updateAnimation();
            sf::View playerCamera;
            const float cameraWidth = 220.0f;
            const float cameraHeight = 180.0f;

            // Animation frame control
            float frameDuration_ = 0.15f;
            float currentRow = 0;
            int curFrame = 0;
            int totFrames = 4;
    
        public:
            PlayerObject(sf::Sprite sprite, float x, float y);
            void Update(float dt) override;
            void Draw(sf::RenderWindow &window) override;
            sf::Sprite getSprite() const { return sprite_; }
            sf::Vector2f getPosition() const { return position_; }
            void setPosition(sf::Vector2f pos) { position_ = pos; }
            sf::View getCamera() { return playerCamera; }
            sf::RectangleShape getPlayerBounds() { return playerBounds; }
    };
}
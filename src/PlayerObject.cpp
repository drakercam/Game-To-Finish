#include "PlayerObject.hpp"

namespace Draker {
    PlayerObject::PlayerObject(sf::Sprite sprite, float x, float y) : GameObject(sprite, x, y), 
    frameRect_(0, 0, 16, 16),
    playerBounds(sf::Vector2f(16.0f, 16.0f)) {
        Init(sprite, x, y);
    }
    
    void PlayerObject::Update(float dt) {
        // additional functionality to be added
        Move(dt);
        updateAnimation();
        updateCamera();
    }

    void PlayerObject::updateCamera() {
        sf::Vector2f playerCenter = position_ + sf::Vector2f(sprite_.getGlobalBounds().width / 2.0f, sprite_.getGlobalBounds().height / 2.0f);

        float halfCameraWidth = cameraWidth / 2.0f;
        float halfCameraHeight = cameraHeight / 2.0f;

        float clampX = std::clamp(playerCenter.x, halfCameraWidth, SCREEN_WIDTH - halfCameraWidth);
        float clampY = std::clamp(playerCenter.y, halfCameraHeight, SCREEN_HEIGHT - halfCameraHeight);

        playerCamera.setCenter(clampX, clampY);
    }

    void PlayerObject::Draw(sf::RenderWindow &window) {
        window.draw(sprite_);
        window.display();
    }
    
    void PlayerObject::Init(sf::Sprite sprite, float x, float y) {
        velocity_ = sf::Vector2f(0.0f, 0.0f);
        sprite_ = sprite;

        sprite_.setTextureRect(frameRect_);

        position_ = sf::Vector2f(x, y);
        sprite_.setPosition(position_);
        playerBounds.setPosition(position_);

        playerCamera = sf::View(sf::FloatRect(0.0f, 0.0f, cameraWidth, cameraHeight));

        direction_ = "towards";
    }

    void PlayerObject::updateAnimation() {
        if (animationClock_.getElapsedTime().asSeconds() >= frameDuration_) {
            curFrame = (curFrame + 1) % totFrames;
            frameRect_.left = curFrame * 16;
            frameRect_.top = currentRow * 16;
            sprite_.setTextureRect(frameRect_);
            animationClock_.restart();
        }
    }
    
    void PlayerObject::Move(float dt) {
        if (velocity_.x >= maxVelocity && velocity_.y >= maxVelocity) {
            velocity_ = sf::Vector2f(maxVelocity, maxVelocity);
        }
    
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            direction_ = "away";
            currentRow = 3;
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.y -= velocity_.y;
            sprite_.setPosition(position_);
            playerBounds.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            direction_ = "towards";
            currentRow = 2;
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.y += velocity_.y;
            sprite_.setPosition(position_);
            playerBounds.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            currentRow = 5;
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.x -= velocity_.y;
            sprite_.setPosition(position_);
            playerBounds.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            currentRow = 4;
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.x += velocity_.y;
            sprite_.setPosition(position_);
            playerBounds.setPosition(position_);
        }
    
        else {
            if (direction_ == "towards") {
                currentRow = 0;
                velocity_ = sf::Vector2f(0.0f, 0.0f);
            }
            else if (direction_ == "away") {
                currentRow = 1;
                velocity_ = sf::Vector2f(0.0f, 0.0f);
            }
        }
    }
}
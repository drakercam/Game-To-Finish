#include "PlayerObject.hpp"

namespace Draker {
    PlayerObject::PlayerObject(sf::Sprite sprite, float x, float y) : GameObject(sprite, x, y) {
        Init(sprite, x, y);
    }
    
    void PlayerObject::Update(float dt) {
        // additional functionality to be added
        Move(dt);
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
        sprite_.setScale(2.0f, 2.0f);

        position_ = sf::Vector2f(x, y);
        sprite_.setPosition(position_);

        playerCamera = sf::View(sf::FloatRect(0.0f, 0.0f, cameraWidth, cameraHeight));
    }
    
    void PlayerObject::Move(float dt) {
        if (velocity_.x >= maxVelocity && velocity_.y >= maxVelocity) {
            velocity_ = sf::Vector2f(maxVelocity, maxVelocity);
        }
    
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.y -= velocity_.y;
            sprite_.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.y += velocity_.y;
            sprite_.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.x -= velocity_.y;
            sprite_.setPosition(position_);
        }
    
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            velocity_ += sf::Vector2f(velocityIncrement, velocityIncrement);
            position_.x += velocity_.y;
            sprite_.setPosition(position_);
        }
    
        else { 
            velocity_ = sf::Vector2f(0.0f, 0.0f);
        }
    }
}
#include "player_game_object.hpp"

namespace Draker {
    PlayerObject::PlayerObject(sf::Sprite sprite) : GameObject(sprite) { 
        Init(sprite);
    }
    
    void PlayerObject::Update(float dt) {
        // additional functionality to be added
        Move(dt);
    }
    
    void PlayerObject::Draw(sf::RenderWindow &window) {
        window.draw(sprite_);
        window.display();
    }
    
    void PlayerObject::Init(sf::Sprite sprite) {
        position_ = sf::Vector2f(SCREEN_WIDTH / 2, SCREEN_WIDTH / 2);
        velocity_ = sf::Vector2f(0.0f, 0.0f);
    
        sprite_ = sprite;
        sprite_.setPosition(position_);
        sprite_.setScale(4.0f, 4.0f);
    }
    
    void PlayerObject::Collide() {
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
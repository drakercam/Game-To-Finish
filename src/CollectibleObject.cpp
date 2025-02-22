#include "CollectibleObject.hpp"

namespace Draker {
    CollectibleObject::CollectibleObject(sf::Sprite sprite) {
        Init(sprite);
    }

    CollectibleObject::~CollectibleObject() {

    }
    
    void CollectibleObject::Init(sf::Sprite sprite) {
        sprite_ = sprite;

        std::random_device ranDev;
        std::mt19937 gen(ranDev());

        std::uniform_real_distribution<float> dist1(16.0f, SCREEN_WIDTH - 16.0f);
        std::uniform_real_distribution<float> dist2(16.0f, SCREEN_HEIGHT - 16.0f);

        float rf1 = dist1(gen);
        float rf2 = dist2(gen);

        position_ = sf::Vector2f(rf1, rf2);
        sprite_.setPosition(position_);
    }
    
    void CollectibleObject::Update(float dt) {
        // update logic to be implemented here
    }
    
    void CollectibleObject::Draw(sf::RenderWindow &window) {
        window.draw(sprite_);
    }
}
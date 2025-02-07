#include "SplashState.hpp"
#include <sstream>

#include <iostream>

#include "SETTINGS.hpp"
#include "MainMenuState.hpp"

namespace Draker {

    SplashState::SplashState(GameDataRef data) : data_(data) {}

    void SplashState::Init() {
        this->data_->assets.LoadTexture("Splash State Background", SPLASH_STATE_BACKGROUND_FILEPATH);

        this->background_.setTexture(this->data_->assets.GetTexture("Splash State Background"));
    }

    void SplashState::HandleInput() {
        sf::Event event;

        while (this->data_->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                this->data_->window.close();
            }
        }
    }

    void SplashState::Update(float dt) {
        if (this->clock_.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME) {
            // Switch to the Main Menu
            this->data_->machine.AddState(StateRef(new MainMenuState(data_)), true);
        }
    }

    void SplashState::Draw(float dt) {
        this->data_->window.clear(sf::Color::Magenta);

        this->data_->window.draw(this->background_);

        this->data_->window.display();
    }

}
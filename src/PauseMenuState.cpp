#include <sstream>
#include "PauseMenuState.hpp"

#include <iostream>

namespace Draker {

    PauseMenuState::PauseMenuState(GameDataRef data) : data_(data) {
        Init();
    }

    void PauseMenuState::Init() {
        this->data_->assets.LoadTexture("Pause State Background", PAUSE_STATE_BACKGROUND_FILEPATH);
        this->data_->assets.LoadTexture("Resume Button", RESUME_BUTTON);
        this->data_->assets.LoadTexture("Pause Menu Title", PAUSE_TITLE);
        this->data_->assets.LoadTexture("Exit Button", EXIT_BUTTON);

        this->background_.setTexture(this->data_->assets.GetTexture("Pause State Background"));
        this->resumeButton_.setTexture(this->data_->assets.GetTexture("Resume Button"));
        this->pausedTitle_.setTexture(this->data_->assets.GetTexture("Pause Menu Title"));
        this->exitButton_.setTexture(this->data_->assets.GetTexture("Exit Button"));

        resumeButton_.setScale(sf::Vector2f(0.33f, 0.33f));
        exitButton_.setScale(sf::Vector2f(0.33f, 0.33f));

        // put button in top right
        this->resumeButton_.setPosition(sf::Vector2f(SCREEN_WIDTH - resumeButton_.getGlobalBounds().width, 0.0f));
        
        // put button in top left
        this->exitButton_.setPosition(sf::Vector2f(background_.getOrigin().x, background_.getOrigin().y));

        // put title at botton of window
        this->pausedTitle_.setPosition(sf::Vector2f((SCREEN_WIDTH / 2) - (this->pausedTitle_.getGlobalBounds().width / 2), SCREEN_HEIGHT - this->pausedTitle_.getGlobalBounds().height));

        this->data_->window.setView(this->data_->window.getDefaultView());
    }

    void PauseMenuState::HandleInput() {
        sf::Event event;

        while (this->data_->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                this->data_->window.close();
            }

            if (this->data_->input.IsSpriteClicked(this->resumeButton_, sf::Mouse::Left, this->data_->window)) {
                std::cout << "Go back to Game" << std::endl;
                this->data_->machine.RemoveState();
            }

            if (this->data_->input.IsSpriteClicked(this->exitButton_, sf::Mouse::Left, this->data_->window)) {
                std::cout << "Exiting Game" << std::endl;
                this->data_->window.close();
            }
        }
    }

    void PauseMenuState::Update(float dt) {
        // implement an updates needed
    }

    void PauseMenuState::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        this->data_->window.draw(this->resumeButton_);
        this->data_->window.draw(this->exitButton_);
        this->data_->window.draw(this->pausedTitle_);

        this->data_->window.display();
    }
}

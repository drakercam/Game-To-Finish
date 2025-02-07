#include <sstream>
#include "MainMenuState.hpp"
#include "GameState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    MainMenuState::MainMenuState(GameDataRef data) : data_(data) {
        Init();
    }

    void MainMenuState::Init() {
        this->data_->assets.LoadTexture("Main Menu State Background", MAIN_MENU_STATE_BACKGROUND_FILEPATH);
        this->data_->assets.LoadTexture("Main Menu Play Button", MAIN_MENU_PLAY_BUTTON_FILEPATH);
        this->data_->assets.LoadTexture("Main Menu Title", MAIN_MENU_STATE_TITLE_FILEPATH);

        this->background_.setTexture(this->data_->assets.GetTexture("Main Menu State Background"));
        this->playButton_.setTexture(this->data_->assets.GetTexture("Main Menu Play Button"));
        this->title_.setTexture(this->data_->assets.GetTexture("Main Menu Title"));

        this->playButton_.setPosition(sf::Vector2f((SCREEN_WIDTH / 2) - (this->playButton_.getGlobalBounds().width / 2),
                                                   (SCREEN_HEIGHT / 2) - (this->playButton_.getGlobalBounds().height / 2)));
                                                   
        this->title_.setPosition(sf::Vector2f((SCREEN_WIDTH / 2) - (this->title_.getGlobalBounds().width / 2),
                                               this->title_.getGlobalBounds().height * 0.1));
    }

    void MainMenuState::HandleInput() {
        sf::Event event;

        while (this->data_->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                this->data_->window.close();
            }

            if (this->data_->input.IsSpriteClicked(this->playButton_, sf::Mouse::Left, this->data_->window)) {
                this->data_->machine.AddState(StateRef(new GameState(data_)), true);
            }
        }
    }

    void MainMenuState::Update(float dt) {
        // implement an updates needed
    }

    void MainMenuState::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        this->data_->window.draw(this->playButton_);
        this->data_->window.draw(this->title_);

        this->data_->window.display();
    }
}

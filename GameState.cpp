#include <sstream>
#include "GameState.hpp"
#include "PauseMenuState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    GameState::GameState(GameDataRef data) : data_(data) {
        Init();
    }

    void GameState::Init() {
        this->data_->assets.LoadTexture("Game State Background", GAME_STATE_BACKGROUND_FILEPATH);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);

        this->background_.setTexture(this->data_->assets.GetTexture("Game State Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));

        this->pauseButton_.setPosition(sf::Vector2f(600.0f, 0.0f));
                                                   
    }

    void GameState::HandleInput() {
        sf::Event event;

        while (this->data_->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                this->data_->window.close();
            }

            if (this->data_->input.IsSpriteClicked(this->pauseButton_, sf::Mouse::Left, this->data_->window)) {
                this->data_->machine.AddState(StateRef(new PauseMenuState(data_)), true);
            }
        }
    }

    void GameState::Update(float dt) {
        // implement an updates needed
    }

    void GameState::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        this->data_->window.draw(this->pauseButton_);

        this->data_->window.display();
    }
}

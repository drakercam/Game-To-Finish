#include "Game.hpp"
#include "SplashState.hpp"

namespace Draker {

    Game::Game(int width, int height, std::string title) {
        this->data_->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);

        sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
        this->data_->window.setPosition(sf::Vector2i(static_cast<int>((desktop.width - this->data_->window.getPosition().x) / 2), 
                                                     static_cast<int>((desktop.height - this->data_->window.getPosition().y)) / 2));

        this->data_->machine.AddState(StateRef(new Draker::SplashState(data_)));

        this->Run();
    }

    void Game::Run() {
        float newTime, frameTime, interpolation;

        float currentTime = this->clock_.getElapsedTime().asSeconds();

        float accumulator = 0.0f;

        while (this->data_->window.isOpen()) {
            this->data_->machine.ProcessStateChanges();

            newTime = this->clock_.getElapsedTime().asSeconds();

            frameTime = newTime - currentTime;

            if (frameTime > 0.25f) {
                frameTime = 0.25f;
            }

            currentTime = newTime;
            accumulator += frameTime;

            while (accumulator >= dt) {
                this->data_->machine.GetActiveState()->HandleInput();

                this->data_->machine.GetActiveState()->Update(dt);

                accumulator -= dt;
            }

            interpolation = accumulator / dt;
            this->data_->machine.GetActiveState()->Draw(interpolation);
        }
    }
}
#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "GameState.hpp"
#include "SETTINGS.hpp"

namespace Draker {

    class MainMenuState : public State {
        public:
            MainMenuState(GameDataRef data);

            void Init();

            void HandleInput();
            void Update(float dt);
            void Draw(float dt);

        private:
            GameDataRef data_;

            sf::Sprite background_;

            sf::Sprite title_;

            sf::Sprite playButton_;
    };  
}
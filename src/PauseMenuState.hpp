#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "GameState.hpp"
#include "AreaOneState.hpp"
#include "AreaTwoState.hpp"
#include "SETTINGS.hpp"

namespace Draker {

    class PauseMenuState : public State {
        public:
            PauseMenuState(GameDataRef data);

            void Init();

            void HandleInput();
            void Update(float dt);
            void Draw(float dt);

        private:
            GameDataRef data_;

            sf::Sprite background_;

            sf::Sprite resumeButton_;

            sf::Sprite pausedTitle_;

            sf::Sprite exitButton_;
    };  
}
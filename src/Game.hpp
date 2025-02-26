#pragma once

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "StateMachine.hpp"
#include "AssetsManager.hpp"
#include "InputManager.hpp"

namespace Draker {

    struct GameData {
        StateMachine machine;
        sf::RenderWindow window;
        AssetsManager assets;
        InputManager input;
    };

    typedef std::shared_ptr<GameData> GameDataRef;

    class Game {
        public:
            Game(int width, int height, std::string title);

        private:
            const float dt = 1.0f / 60.0f;
            sf::Clock clock_;

            GameDataRef data_ = std::make_shared<GameData>();

            void Run();
    };
}
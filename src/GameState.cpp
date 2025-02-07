#include <sstream>
#include "GameState.hpp"
#include "PauseMenuState.hpp"
#include "AreaOneState.hpp"
#include "AreaTwoState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    GameState::GameState(GameDataRef data) : data_(data) {
        Init();
    }

    GameState::~GameState() {
        delete player;
    }

    void GameState::Init() {
        this->data_->assets.LoadTexture("Game State Background", GAME_STATE_BACKGROUND_FILEPATH);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);
        this->data_->assets.LoadTexture("Player Sprite", PLAYER_SPRITE);

        this->background_.setTexture(this->data_->assets.GetTexture("Game State Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));
        this->playerSprite_.setTexture(this->data_->assets.GetTexture("Player Sprite"));
        this->player = new PlayerObject(playerSprite_);
        this->borders = new GameBorders();

        areaOne = false;
        areaTwo = false;

        pauseButton_.setScale(sf::Vector2f(0.25f, 0.25f));

        this->pauseButton_.setPosition(sf::Vector2f(SCREEN_WIDTH - pauseButton_.getGlobalBounds().width, 0.0f));
                                                   
    }

    void GameState::HandleInput() {
        sf::Event event;

        while (this->data_->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                this->data_->window.close();
            }

            if (this->data_->input.IsSpriteClicked(this->pauseButton_, sf::Mouse::Left, this->data_->window)) {
                this->data_->machine.AddState(StateRef(new PauseMenuState(data_)), false);
            }
        }
    }

    void GameState::Update(float dt) {
        // implement an updates needed
        player->Update(dt);
        
        borders->checkArea(player, areaOne, areaTwo);

        if (areaOne) {
            std::cout << "Going to area one" << std::endl;
            std::cout << "value of areaOne " << areaOne << std::endl;
            this->data_->machine.AddState(StateRef(new AreaOne(data_)), true);
        }
        
        if (areaTwo) {
            std::cout << "Going to area one" << std::endl;
            std::cout << "value of areaTwo " << areaTwo << std::endl;
            this->data_->machine.AddState(StateRef(new AreaTwo(data_)), true);
        }
    }

    void GameState::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        DrawTileGrid();
        this->data_->window.draw(this->pauseButton_);
        this->player->Draw(this->data_->window);

        this->data_->window.display();
    }

    void GameState::DrawTileGrid() {
        sf::VertexArray grid(sf::Lines);

        // drawing the vertical lines
        for (int x = 0; x <= SCREEN_WIDTH; x += TILESIZE) {
            grid.append(sf::Vertex(sf::Vector2f(x, 0), sf::Color::White));
            grid.append(sf::Vertex(sf::Vector2f(x, SCREEN_HEIGHT), sf::Color::White));
        }

        // drawing the horizontal lines
        for (int y = 0; y <= SCREEN_HEIGHT; y += TILESIZE) {
            grid.append(sf::Vertex(sf::Vector2f(0, y), sf::Color::White));
            grid.append(sf::Vertex(sf::Vector2f(SCREEN_WIDTH, y), sf::Color::White));
        }

        this->data_->window.draw(grid);
    }
}

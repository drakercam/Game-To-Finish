#include <sstream>
#include "AreaOneState.hpp"
#include "PauseMenuState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    AreaOne::AreaOne(GameDataRef data) : data_(data) {
        Init();
    }

    AreaOne::~AreaOne() {
        delete player;
    }

    void AreaOne::Init() {
        this->data_->assets.LoadTexture("Area One Background", AREA_ONE_BACKGROUND);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);
        this->data_->assets.LoadTexture("Player Sprite", PLAYER_SPRITE);

        this->background_.setTexture(this->data_->assets.GetTexture("Area One Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));
        this->playerSprite_.setTexture(this->data_->assets.GetTexture("Player Sprite"));
        this->player = new PlayerObject(playerSprite_);

        pauseButton_.setScale(sf::Vector2f(0.25f, 0.25f));

        this->pauseButton_.setPosition(sf::Vector2f(SCREEN_WIDTH - pauseButton_.getGlobalBounds().width, 0.0f));            
    }

    void AreaOne::HandleInput() {
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

    void AreaOne::Update(float dt) {
        // implement an updates needed
        player->Update(dt);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
            this->data_->machine.AddState(StateRef(new GameState(data_)), true);
        }
    }

    void AreaOne::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        DrawTileGrid();
        this->data_->window.draw(this->pauseButton_);
        this->player->Draw(this->data_->window);

        this->data_->window.display();
    }

    void AreaOne::DrawTileGrid() {
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

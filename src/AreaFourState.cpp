#include <sstream>
#include "AreaFourState.hpp"
#include "PauseMenuState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    AreaFour::AreaFour(GameDataRef data) : data_(data) {
        Init();
    }

    AreaFour::~AreaFour() {
        delete player;
        delete borders;
    }

    void AreaFour::Init() {
        this->data_->assets.LoadTexture("Area Four Background", AREA_FOUR_BACKGROUND);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);
        this->data_->assets.LoadTexture("Player Sprite Sheet", PLAYER_SPRITE_SHEET);

        this->background_.setTexture(this->data_->assets.GetTexture("Area Four Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));
        this->playerSprite_.setTexture(this->data_->assets.GetTexture("Player Sprite Sheet"));

        createAreas();

        float playerPosX = mainArea.getPosition().x + 24.0f;
        float playerPosY = mainArea.getPosition().y + (playerSprite_.getGlobalBounds().height / 4.0f);

        this->player = new PlayerObject(playerSprite_, playerPosX, playerPosY);
        this->borders = new GameBorders();

        pauseButton_.setScale(sf::Vector2f(0.1f, 0.1f));

        setPauseButtonLoc();
    }

    void AreaFour::HandleInput() {
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

    void AreaFour::Update(float dt) {
        // implement an updates needed
        player->Update(dt);
        this->data_->window.setView(player->getCamera());

        setPauseButtonLoc();

        borders->checkBorders(player);
        changeArea();
    }

    void AreaFour::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        DrawTileGrid();

        this->data_->window.draw(mainArea);

        this->data_->window.draw(this->pauseButton_);
        this->player->Draw(this->data_->window);

        this->data_->window.display();
    }

    void AreaFour::DrawTileGrid() {
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

    void AreaFour::setPauseButtonLoc() {        
        // Calculate the top left of the view.
        float viewLeft = player->getCamera().getCenter().x - (player->getCamera().getSize().x / 2);
        float viewTop = player->getCamera().getCenter().y - (player->getCamera().getSize().y / 2);
        
        // Calculate the top right of the view.
        float viewRight = viewLeft + player->getCamera().getSize().x;
        
        // Update the pause button's position:
        // Place it at the top right with a margin, offset by its width.
        pauseButton_.setPosition(
            viewRight - pauseButton_.getGlobalBounds().width,
            viewTop
        );
    }

    void AreaFour::changeArea() {
        sf::FloatRect playerBounds = player->getSprite().getGlobalBounds();

        sf::FloatRect mainAreaRect = mainArea.getGlobalBounds();

        if (playerBounds.intersects(mainAreaRect)) {
            std::cout << "Moving back to Main Area" << std::endl;
            this->data_->machine.AddState(StateRef(new GameState(data_)), true);
        }
    }

    void AreaFour::createAreas() {
        // Calculate positions:
        // For vertical borders: center vertically.
        float verticalY = (SCREEN_HEIGHT / 2.f) - (verticalHeight / 2.f);
        // For horizontal borders: center horizontally.
        float horizontalX = (SCREEN_WIDTH / 2.f) - (horizontalWidth / 2.f);

        // create exit to main area proportional to where you entered
        mainArea = sf::RectangleShape((sf::Vector2f(horizontalWidth, horizontalHeight)));
        mainArea.setPosition(horizontalX, 0.0f);
        mainArea.setFillColor(sf::Color::Green);
    }
}

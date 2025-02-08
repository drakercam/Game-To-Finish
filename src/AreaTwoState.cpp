#include <sstream>
#include "AreaTwoState.hpp"
#include "PauseMenuState.hpp"
#include "SETTINGS.hpp"

#include <iostream>

namespace Draker {

    AreaTwo::AreaTwo(GameDataRef data) : data_(data) {
        Init();
    }

    AreaTwo::~AreaTwo() {
        delete player;
        delete borders;
    }

    void AreaTwo::Init() {
        this->data_->assets.LoadTexture("Area Two Background", AREA_TWO_BACKGROUND);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);
        this->data_->assets.LoadTexture("Player Sprite", PLAYER_SPRITE);

        this->background_.setTexture(this->data_->assets.GetTexture("Area Two Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));
        this->playerSprite_.setTexture(this->data_->assets.GetTexture("Player Sprite"));

        createAreas();

        float playerPosX = mainArea.getPosition().x + 24.0f;
        float playerPosY = mainArea.getPosition().y - 2 * (playerSprite_.getGlobalBounds().height);

        this->player = new PlayerObject(playerSprite_, playerPosX, playerPosY);
        this->borders = new GameBorders();

        pauseButton_.setScale(sf::Vector2f(0.1f, 0.1f));

        setPauseButtonLoc();
    }

    void AreaTwo::HandleInput() {
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

    void AreaTwo::Update(float dt) {
        // implement an updates needed
        player->Update(dt);
        this->data_->window.setView(player->getCamera());

        setPauseButtonLoc();

        borders->checkBorders(player);
        changeArea();
    }

    void AreaTwo::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        DrawTileGrid();

        this->data_->window.draw(mainArea);

        this->data_->window.draw(this->pauseButton_);
        this->player->Draw(this->data_->window);

        this->data_->window.display();
    }

    void AreaTwo::DrawTileGrid() {
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

    void AreaTwo::setPauseButtonLoc() {
        // Define a margin from the edge.
        const float margin = 10.0f;
        
        // Calculate the top left of the view.
        float viewLeft = player->getCamera().getCenter().x - (player->getCamera().getSize().x / 2);
        float viewTop = player->getCamera().getCenter().y - (player->getCamera().getSize().y / 2);
        
        // Calculate the top right of the view.
        float viewRight = viewLeft + player->getCamera().getSize().x;
        
        // Update the pause button's position:
        // Place it at the top right with a margin, offset by its width.
        pauseButton_.setPosition(
            viewRight - pauseButton_.getGlobalBounds().width - margin,
            viewTop + margin
        );
    }

    void AreaTwo::changeArea() {
        sf::FloatRect playerBounds = player->getSprite().getGlobalBounds();

        sf::FloatRect mainAreaRect = mainArea.getGlobalBounds();

        if (playerBounds.intersects(mainAreaRect)) {
            std::cout << "Moving back to Main Area" << std::endl;
            this->data_->machine.AddState(StateRef(new GameState(data_)), true);
        }
    }

    void AreaTwo::createAreas() {
        // Calculate positions:
        // For vertical borders: center vertically.
        float verticalY = (SCREEN_HEIGHT / 2.f) - (verticalHeight / 2.f);
        // For horizontal borders: center horizontally.
        float horizontalX = (SCREEN_WIDTH / 2.f) - (horizontalWidth / 2.f);

        // create exit to main area proportional to where you entered
        mainArea = sf::RectangleShape((sf::Vector2f(horizontalWidth, horizontalHeight)));
        mainArea.setPosition(horizontalX, SCREEN_HEIGHT - horizontalHeight);
        mainArea.setFillColor(sf::Color::Green);
    }
}

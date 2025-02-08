#include <sstream>
#include "GameState.hpp"

#include <iostream>

namespace Draker {

    GameState::GameState(GameDataRef data) : data_(data) {
        Init();
    }

    GameState::~GameState() {
        delete player;
        delete borders;
    }

    void GameState::Init() {
        this->data_->assets.LoadTexture("Game State Background", GAME_STATE_BACKGROUND_FILEPATH);
        this->data_->assets.LoadTexture("Pause Button", PAUSE_BUTTON);
        this->data_->assets.LoadTexture("Player Sprite", PLAYER_SPRITE);

        this->background_.setTexture(this->data_->assets.GetTexture("Game State Background"));
        this->pauseButton_.setTexture(this->data_->assets.GetTexture("Pause Button"));
        this->playerSprite_.setTexture(this->data_->assets.GetTexture("Player Sprite"));

        float playerPosX = SCREEN_WIDTH / 2.0f;
        float playerPosY = SCREEN_HEIGHT / 2.0f;

        this->player = new PlayerObject(playerSprite_, playerPosX, playerPosY);
        this->borders = new GameBorders();

        // setup different area entry points
        createAreas();

        pauseButton_.setScale(sf::Vector2f(0.1f, 0.1f));

        setPauseButtonLoc();
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
        this->data_->window.setView(player->getCamera());

        setPauseButtonLoc();

        borders->checkBorders(player);
        changeArea();
    }

    void GameState::Draw(float dt) {
        this->data_->window.clear();
        
        this->data_->window.draw(this->background_);
        DrawTileGrid();

        this->data_->window.draw(areaOne);
        this->data_->window.draw(areaTwo);
        this->data_->window.draw(areaThree);
        this->data_->window.draw(areaFour);

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

    void GameState::setPauseButtonLoc() {
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

    void GameState::changeArea() {
        sf::FloatRect playerBounds = player->getSprite().getGlobalBounds();

        sf::FloatRect areaOneRect = areaOne.getGlobalBounds();
        sf::FloatRect areaTwoRect = areaTwo.getGlobalBounds();
        sf::FloatRect areaThreeRect = areaThree.getGlobalBounds();
        sf::FloatRect areaFourRect = areaFour.getGlobalBounds();

        if (playerBounds.intersects(areaOneRect)) {
            std::cout << "Moving to areaOne" << std::endl;
            this->data_->machine.AddState(StateRef(new AreaOne(data_)), true);
        }
        else if (playerBounds.intersects(areaTwoRect)) {
            std::cout << "Moving to areaTwo" << std::endl;
            this->data_->machine.AddState(StateRef(new AreaTwo(data_)), true);
        }
        else if (playerBounds.intersects(areaThreeRect)) {
            std::cout << "Moving to areaThree" << std::endl;
            this->data_->machine.AddState(StateRef(new AreaThree(data_)), true);
        }
        else if (playerBounds.intersects(areaFourRect)) {
            std::cout << "Moving to areaFour" << std::endl;
            this->data_->machine.AddState(StateRef(new AreaFour(data_)), true);
        }
    }

    void GameState::createAreas() {
        // Calculate positions:
        // For vertical borders: center vertically.
        float verticalY = (SCREEN_HEIGHT / 2.f) - (verticalHeight / 2.f);
        // For horizontal borders: center horizontally.
        float horizontalX = (SCREEN_WIDTH / 2.f) - (horizontalWidth / 2.f);

        // Create the left border: 8 x 48, flush with left side.
        areaOne = sf::RectangleShape((sf::Vector2f(verticalWidth, verticalHeight)));
        areaOne.setPosition(0.f, verticalY);
        areaOne.setFillColor(sf::Color::Cyan);

        // Create the right border: 8 x 48, flush with right side.
        areaThree = sf::RectangleShape((sf::Vector2f(verticalWidth, verticalHeight)));
        areaThree.setPosition(SCREEN_WIDTH - verticalWidth, verticalY);
        areaThree.setFillColor(sf::Color::Red);

        // Create the top border: 48 x 8, flush with top side.
        areaTwo = sf::RectangleShape((sf::Vector2f(horizontalWidth, horizontalHeight)));
        areaTwo.setPosition(horizontalX, 0.f);
        areaTwo.setFillColor(sf::Color::Blue);

        // Create the bottom border: 48 x 8, flush with bottom side.
        areaFour = sf::RectangleShape((sf::Vector2f(horizontalWidth, horizontalHeight)));
        areaFour.setPosition(horizontalX, SCREEN_HEIGHT - horizontalHeight);
        areaFour.setFillColor(sf::Color::Yellow);
    }
}

#include "AssetsManager.hpp"

namespace Draker {

    void AssetsManager::LoadTexture(std::string textureName, std::string fileName) {
        sf::Texture texture;

        if (texture.loadFromFile(fileName)) {
            this->textures_[textureName] = texture;
        }
    }

    sf::Texture &AssetsManager::GetTexture(std::string textureName) {
        return this->textures_.at(textureName);
    }

    void AssetsManager::LoadFont(std::string fontName, std::string fileName) {
        sf::Font font;

        if (font.loadFromFile(fileName)) {
            this->fonts_[fontName] = font;
        }
    }

    sf::Font &AssetsManager::GetFont(std::string fontName) {
        return this->fonts_.at(fontName);
    }
}
#pragma once

// map to store all textures and fonts loaded
#include <map>

#include <SFML/Graphics.hpp>

namespace Draker {

    class AssetsManager {
        public:
            AssetsManager() { }
            ~AssetsManager() { }

            void LoadTexture(std::string textureName, std::string fileName);
            sf::Texture &GetTexture(std::string textureName);

            void LoadFont(std::string fontName, std::string fileName);
            sf::Font &GetFont(std::string fontName);

        private:
            std::map<std::string, sf::Texture> textures_;
            std::map<std::string, sf::Font> fonts_;
    };
}
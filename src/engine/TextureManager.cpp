#include "TextureManager.h"
#include <algorithm>

TextureManager::TextureManager()
{
    //ctor
}

TextureManager::~TextureManager()
{
    std::for_each(_textures.begin(), _textures.end(), TextureDeallocator());
}

sf::Texture* TextureManager::getTexture(const std::string file)
{
    std::map<const std::string, sf::Texture*>::iterator it = _textures.find(file);

    if (it != _textures.end())
    {
        return it->second;
    }
    else
    {
        sf::Texture* texture = new sf::Texture();
        if (texture->loadFromFile(file))
        {
            _textures.insert(std::pair<const std::string, sf::Texture*>(file, texture));
            return texture;
        }
    }

    return 0;
}

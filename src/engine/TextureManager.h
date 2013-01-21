#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include "stdincl.h"
#include <string>
#include <map>
#include <utility>

class TextureManager
{
    public:
        TextureManager();
        ~TextureManager();

        sf::Texture* getTexture(const std::string file);

    private:
        std::map<const std::string, sf::Texture*> _textures;

        struct TextureDeallocator
        {
            void operator()(const std::pair<const std::string, sf::Texture*>& p)
            {
                delete p.second;
            }
        };
};

#endif // TEXTUREMANAGER_H

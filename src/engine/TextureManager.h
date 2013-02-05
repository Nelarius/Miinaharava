#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include "stdincl.h"
#include <string>
#include <map>
#include <utility>

/// \brief A memory management class for loading textures.
class TextureManager
{
    public:
        TextureManager();
        ~TextureManager();

        /// \brief Get a specified texture.
        ///
        /// \param file The path, including the filename, to the texture.
        /// \return A pointer to the resulting sf::Texture.
        ///
        /// This class loads a specific texture into memory once. If a texture is requested a second time,
        /// it simply returns a pointer to the already existing texture.
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

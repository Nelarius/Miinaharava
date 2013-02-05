#ifndef DRAWABLESPRITE_H
#define DRAWABLESPRITE_H

#include <string>
#include "engine/Drawable.h"
#include "engine/stdincl.h"

/// \brief This class models a generic drawable sprite.
class DrawableSprite : public Drawable
{
    public:
        DrawableSprite();
        virtual ~DrawableSprite();

        /// \brief Specify and load a texture file to be displayed.
        /// \param file The path, including the file name.
        virtual void load(const std::string file);

        /// \brief Inherited method from Drawable.
        virtual void draw(sf::RenderWindow&);

        /// \brief
        /// \return A 2f-vector containing the coordinates of the upper left corner of the sprite.
        virtual sf::Vector2f getPosition() const;

        /// \brief Inherited method from Drawable.
        virtual void setPosition(float x, float y);

        /// \brief Check if the sprite has loaded succesfully.
        /// \return True if loading was successful, false if not.
        /// This method might be used before trying to access a texture from the sprite, for instance.
        virtual bool isLoaded() const;

    protected:
        sf::Sprite& getSprite();
        bool _isLoaded;

    private:
        sf::Sprite _sprite;
        std::string _fileName;
};

#endif // DRAWABLESPRITE_H

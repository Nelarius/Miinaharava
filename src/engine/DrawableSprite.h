#ifndef DRAWABLESPRITE_H
#define DRAWABLESPRITE_H

#include <string>
#include "engine/Drawable.h"
#include "engine/stdincl.h"

class DrawableSprite : public Drawable
{
    public:
        DrawableSprite();
        virtual ~DrawableSprite();

        virtual void load(const std::string file);
        virtual void draw(sf::RenderWindow&);

        virtual sf::Vector2f getPosition() const;
        virtual void setPosition(float x, float y);

        virtual bool isLoaded() const;

    protected:
        sf::Sprite& getSprite();
        bool _isLoaded;

    private:
        sf::Sprite _sprite;
        std::string _fileName;
};

#endif // DRAWABLESPRITE_H

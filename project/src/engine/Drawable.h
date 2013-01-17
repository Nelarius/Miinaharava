#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string>
#include "engine/stdincl.h"

class Drawable
{
    public:
        Drawable();
        virtual ~Drawable();

        virtual void load(const string std::string file);
        virtual void draw(sf::RenderWindow&);

        virtual sf::Vector2f getPosition() const;
        virtual void setPosition(float x, float y);

        virtual const bool isLoaded() const;
    protected:
        sf::Sprite& getSprite() const;
        bool _isLoaded;

    private:
        sf::Sprite _sprite;
        std::string _fileName;
};

#endif // DRAWABLE_H

#ifndef MENUDRAWABLE_H
#define MENUDRAWABLE_H

#include <engine/Drawable.h>
#include <engine/stdincl.h>


class MenuDrawable : public Drawable
{
    public:
        MenuDrawable();
        ~MenuDrawable();

        void draw(sf::RenderWindow&);

    private:
        sf::Text _text;
};

#endif // MENUDRAWABLE_H

#ifndef WINDRAWABLE_H
#define WINDRAWABLE_H

#include <engine/stdincl.h>
#include <engine/Drawable.h>

class WinDrawable : public Drawable
{
    public:
        WinDrawable();
        ~WinDrawable();
        void setText(sf::Time& time);
        void setTextForNarrowWindow(int minutes, int seconds);
        void setTextOtherWise(int minutes, int seconds);

        void draw(sf::RenderWindow& window);

    private:
        sf::Text _text;
};

#endif // WINDRAWABLE_H

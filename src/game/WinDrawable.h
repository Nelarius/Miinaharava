#ifndef WINDRAWABLE_H
#define WINDRAWABLE_H

#include <engine/stdincl.h>
#include <engine/Drawable.h>

/// \brief a Drawable class that prints text when the game is won.
class WinDrawable : public Drawable
{
    public:
        WinDrawable();
        ~WinDrawable();

        /// \brief Sets the text to print based on the elapsed time.
        /// \param time The sf::Time object corresponding to the elapsed time of the game.
        void setText(sf::Time& time);

        /// \brief Inherited from Drawable.
        void draw(sf::RenderWindow& window);

    private:
        void setTextForNarrowWindow(int minutes, int seconds);
        void setTextOtherWise(int minutes, int seconds);

        sf::Text _text;
};

#endif // WINDRAWABLE_H

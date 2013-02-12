#ifndef MENUGUIBEHAVIOR_H
#define MENUGUIBEHAVIOR_H

#include <engine/Behavior.h>
namespace sf
{
    class Event;
}


class MenuGUIBehavior : public Behavior
{
    public:
        MenuGUIBehavior();
        ~MenuGUIBehavior();

        /// \brief Inherited from Behavior.
        void update();

    private:
        void handleRegularButtons(sf::Event& event);
        void handleDynamicButtons(sf::Event& event);

        void generateDynamicButtons();
        void removeDynamicButtons();

        unsigned int _closeButtonHandle;
        unsigned int _playButtonHandle;

        unsigned int _playEasyButtonHandle;
        unsigned int _playMediumButtonHandle;
        unsigned int _playHardButtonHandle;

};

#endif // MENUGUIBEHAVIOR_H

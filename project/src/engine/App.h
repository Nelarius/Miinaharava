#ifndef APP_H
#define APP_H

#include "stdincl.h"

/// \brief App class uses singleton design pattern.
///
///

class App
{
    public:
        static App* getInstance();
        void execute();
        void onLoop();
        void onRender();

    private:
        App();
        sf::RenderWindow _mainWindow;
};

#endif // APP_H

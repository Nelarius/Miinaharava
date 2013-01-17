#include "engine/App.h"

App::App()
{
    //ctor
}

App* App::getInstance()
{
    static App app;
    return &app;
}

void App::execute()
{
    _mainWindow.create(sf::VideoMode(800,600), "A window");

    _mainWindow.resetGLStates();

    while(_mainWindow.isOpen())
    {
        _mainWindow.display();
        sf::sleep(sf::milliseconds(50));
    }
}

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
    _mainWindow.create(sf::VideoMode(800, 600, 32), "Minesweeper", sf::Style::Resize || sf::Style::Close);

    _mainWindow.resetGLStates();

    while(_mainWindow.isOpen())
    {
        sf::Event event;
        while (_mainWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _mainWindow.close();
        }
        sf::sleep(sf::milliseconds(50));
    }
}

void App::onLoop()
{
    _entityManager->onLoop();
}

void App::onRender()
{
    _entityManager->onRender(_mainWindow);
}

sf::RenderWindow& App::getWindow() const
{
    return _mainWindow;
}

TextureManager& App::getTextureManager() const
{
    return _textureManager;
}

EntityManager& App::getEntityManager() const
{
    return _entityManager;
}

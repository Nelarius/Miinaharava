#include "engine/App.h"
#include "engine/AppState.h"

App::App()
{
    //ctor
}

App* App::getInstance()
{
    static App app;
    return &app;
}

void App::initialize()
{
    _mainWindow.create(sf::VideoMode(180, 180, 32), "Minesweeper", sf::Style::None);
    _mainWindow.resetGLStates();
    _mainWindow.setFramerateLimit(60);

    _appStateManager.setActiveAppState(AppState::SplashScreen);
}

void App::execute()
{
    initialize();

    while(_mainWindow.isOpen())
    {
        onLoop();

        onRender();
    }
}

void App::onLoop()
{
    _entityManager.onLoop();
}

void App::onRender()
{
    _entityManager.onRender(_mainWindow);

    _mainWindow.display();
}

sf::RenderWindow& App::getWindow()
{
    return _mainWindow;
}

TextureManager& App::getTextureManager()
{
    return _textureManager;
}

EntityManager& App::getEntityManager()
{
    return _entityManager;
}

AppStateManager& App::getAppStateManager()
{
    return _appStateManager;
}

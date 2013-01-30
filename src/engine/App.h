#ifndef APP_H
#define APP_H

#include <engine/stdincl.h>
#include <engine/EntityManager.h>
#include <engine/TextureManager.h>
#include <engine/AppStateManager.h>

/// \brief App class uses singleton design pattern.
///
///

class App
{
    public:
        static App* getInstance();

        void initialize();
        void execute();
        void onLoop();
        void onRender();

        sf::RenderWindow& getWindow();
        TextureManager& getTextureManager();
        EntityManager& getEntityManager();
        AppStateManager& getAppStateManager();

    private:
        App();
        sf::RenderWindow _mainWindow;
        TextureManager _textureManager;
        EntityManager _entityManager;
        AppStateManager _appStateManager;
};

#endif // APP_H

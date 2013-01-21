#ifndef APP_H
#define APP_H

#include "stdincl.h"
#include "EntityManager.h"
#include "TextureManager.h"
#include "AppStateManager.h"

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

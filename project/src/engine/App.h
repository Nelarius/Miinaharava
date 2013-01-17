#ifndef APP_H
#define APP_H

#include "stdincl.h"

class TextureManager;

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

        sf::RenderWindow& getWindow() const;
        TextureManager& getTextureManager() const;
        EntityManager& getEntityManager() const;

    private:
        App();
        sf::RenderWindow _mainWindow;
        TextureManager _textureManager;
        EntityManager _entityManager;

};

#endif // APP_H

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

        /// \brief Returns the singleton instance of the class.
        ///
        /// \return A pointer to the instance of App.
        ///
        static App* getInstance();

        /// \brief Executes all application functionality.
        void execute();

        /// \brief
        /// \return The reference to sf::RenderWindow that this instance owns.
        sf::RenderWindow& getWindow();

        /// \brief
        /// \return The reference to TextureManager that this instance owns.
        TextureManager& getTextureManager();

        /// \brief
        /// \return The reference to EntityManager that this instance owns.
        EntityManager& getEntityManager();

        /// \brief
        /// \return The reference to AppStateManager that this instance owns.
        AppStateManager& getAppStateManager();

    private:
        App();
        void initialize();
        void onLoop();
        void onRender();

        sf::RenderWindow _mainWindow;
        TextureManager _textureManager;
        EntityManager _entityManager;
        AppStateManager _appStateManager;
};

#endif // APP_H

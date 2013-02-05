#ifndef APPSTATEMANAGER_H
#define APPSTATEMANAGER_H

#include <engine/AppState.h>   //mandatory for derived classes...
#include <game/AppStateSplashScreen.h>
#include <game/AppStateMenu.h>
#include <game/AppStateClassic.h>

/// \brief This class manages instances of AppState objects.
///
/// This class calls the deactivation code of the current app state and runs the activation code of the new app state
/// when the app state is changed.
class AppStateManager
{
    public:
        AppStateManager();
        ~AppStateManager();

        /// \brief Sets the active app state to the state corresponding to the specified id.
        ///
        /// \param id The AppState id to change to. AppState ids are enumerated in AppState.
        void setActiveAppState(int id);

    private:
        AppState* _activeAppState;

        AppStateSplashScreen   _splashScreen;
        AppStateMenu           _menu;
        AppStateClassic        _classic;
};

#endif // APPSTATEMANAGER_H

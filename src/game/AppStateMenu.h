#ifndef APPSTATEMENU_H
#define APPSTATEMENU_H

#include <engine/AppState.h>

/// \brief The menu AppState.
///
/// This AppState contains the code for initializing the menu GUI.
class AppStateMenu : public AppState
{
    public:
        AppStateMenu();
        ~AppStateMenu();

        /// \brief Inherited from AppState.
        void activate();

        /// \brief Inherited from AppState.
        void deactivate();

    private:
};

#endif // APPSTATEMENU_H

#ifndef APPSTATECLASSIC_H
#define APPSTATECLASSIC_H

#include <engine/AppState.h>

/// \brief The game AppState.
///
/// This AppState contains the code for initializing & running the game.
class AppStateClassic : public AppState
{
    public:
        AppStateClassic();
        ~AppStateClassic();

        void activate();
        void deactivate();

    private:
};

#endif // APPSTATECLASSIC_H

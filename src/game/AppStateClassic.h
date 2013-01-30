#ifndef APPSTATECLASSIC_H
#define APPSTATECLASSIC_H

#include <engine/AppState.h>


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

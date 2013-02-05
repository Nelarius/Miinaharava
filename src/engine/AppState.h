#ifndef APPSTATE_H
#define APPSTATE_H

/// \brief A model for all app states.
class AppState
{
    public:
        AppState();
        virtual ~AppState();

        /// \brief The activation method for this app state.
        virtual void activate() = 0;

        /// \brief The deactivation method for this app state.
        virtual void deactivate() = 0;

        /// \brief Numeric ids of derived app states.
        enum
        {
            SplashScreen,
            Menu,
            Classic
        };
};

#endif // APPSTATE_H

#ifndef APPSTATE_H
#define APPSTATE_H


class AppState
{
    public:
        AppState();
        virtual ~AppState();

        virtual void activate() = 0;
        virtual void deactivate() = 0;

        enum
        {
            SplashScreen,
            Menu,
            Classic
        };
};

#endif // APPSTATE_H

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
            //
        };
};

#endif // APPSTATE_H
#include "engine/App.h"

int main()
{
    App* app = App::getInstance();
    app->execute();

    return 0;
}

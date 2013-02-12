#include <game/MenuGUIBehavior.h>
#include <game/DrawableTextRectangle.h>
#include <game/TextRectangleEntity.h>
#include <engine/App.h>
#include <engine/stdincl.h>
#include <game/Parameters.h>

MenuGUIBehavior::MenuGUIBehavior()
{
    TextRectangleEntity* close = new TextRectangleEntity("Close");
    close->setPosition(60, 200);

    TextRectangleEntity* play = new TextRectangleEntity("Play");
    play->setPosition(60, 100);

    //TextRectangleEntity* playMedium = new TextRectangleEntity

    EntityManager& manager = App::getInstance()->getEntityManager();

    _closeButtonHandle = manager.getHighestAvailableIdent();
    manager.add(_closeButtonHandle, close);

    _playButtonHandle = manager.getHighestAvailableIdent();
    manager.add(_playButtonHandle, play);

    //these don't exist at the moment:
    _playEasyButtonHandle   = 0u;
    _playMediumButtonHandle = 0u;
    _playHardButtonHandle   = 0u;
}

MenuGUIBehavior::~MenuGUIBehavior()
{
    //dtor
}

void MenuGUIBehavior::update()
{
    App::getInstance()->getWindow().clear(sf::Color(sf::Color::Black));

    sf::Event event;
    while (App::getInstance()->getWindow().pollEvent(event))
    {
        if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))
        {
            App::getInstance()->getWindow().close();
        }

        if (event.type == sf::Event::MouseButtonPressed and event.mouseButton.button == sf::Mouse::Left)
        {
            handleRegularButtons(event);

            if (_playEasyButtonHandle)
            {
                handleDynamicButtons(event);
            }
        }
    }
}

void MenuGUIBehavior::handleRegularButtons(sf::Event& event)
{
    DrawableTextRectangle* close = dynamic_cast<DrawableTextRectangle*>(App::getInstance()->getEntityManager().getEntity(_closeButtonHandle)->getDrawable());
    DrawableTextRectangle* play  = dynamic_cast<DrawableTextRectangle*>(App::getInstance()->getEntityManager().getEntity(_playButtonHandle)->getDrawable());

    if (play->isWithinBoundary(event.mouseButton.x, event.mouseButton.y))
    {
        if (_playEasyButtonHandle == 0u)
        {
            generateDynamicButtons();
            return;
        }

        removeDynamicButtons();
        return;
    }

    if (close->isWithinBoundary(event.mouseButton.x, event.mouseButton.y))
    {
        App::getInstance()->getWindow().close();
        return;
    }
}

void MenuGUIBehavior::handleDynamicButtons(sf::Event& event)
{
    DrawableTextRectangle* playeasy     = dynamic_cast<DrawableTextRectangle*>(App::getInstance()->getEntityManager().getEntity(_playEasyButtonHandle)->getDrawable());
    DrawableTextRectangle* playmedium   = dynamic_cast<DrawableTextRectangle*>(App::getInstance()->getEntityManager().getEntity(_playMediumButtonHandle)->getDrawable());
    DrawableTextRectangle* playhard     = dynamic_cast<DrawableTextRectangle*>(App::getInstance()->getEntityManager().getEntity(_playHardButtonHandle)->getDrawable());

    if (playeasy->isWithinBoundary(event.mouseButton.x, event.mouseButton.y))
    {
        Parameters::setDifficulty(Parameters::Easy);
        App::getInstance()->resize();
        App::getInstance()->getAppStateManager().setActiveAppState(AppState::Classic);
        return;
    }

    if (playmedium->isWithinBoundary(event.mouseButton.x, event.mouseButton.y))
    {
        Parameters::setDifficulty(Parameters::Medium);
        App::getInstance()->resize();
        App::getInstance()->getAppStateManager().setActiveAppState(AppState::Classic);
        return;
    }

    if (playhard->isWithinBoundary(event.mouseButton.x, event.mouseButton.y))
    {
        Parameters::setDifficulty(Parameters::Hard);
        App::getInstance()->resize();
        App::getInstance()->getAppStateManager().setActiveAppState(AppState::Classic);
        return;
    }
}

void MenuGUIBehavior::generateDynamicButtons()
{
    EntityManager& manager = App::getInstance()->getEntityManager();

    _playEasyButtonHandle = manager.getHighestAvailableIdent();
    TextRectangleEntity* playeasy = new TextRectangleEntity("Easy");
    playeasy->setPosition(Parameters::ScreenWidth()/2, 100);
    manager.add(_playEasyButtonHandle, playeasy);

    _playMediumButtonHandle = manager.getHighestAvailableIdent();
    TextRectangleEntity* playmedium = new TextRectangleEntity("Medium");
    playmedium->setPosition(Parameters::ScreenWidth()/2, 200);
    manager.add(_playMediumButtonHandle, playmedium);

    _playHardButtonHandle = manager.getHighestAvailableIdent();
    TextRectangleEntity* playhard = new TextRectangleEntity("Hard");
    playhard->setPosition(Parameters::ScreenWidth()/2, 300);
    manager.add(_playHardButtonHandle, playhard);
}

void MenuGUIBehavior::removeDynamicButtons()
{
    EntityManager& manager = App::getInstance()->getEntityManager();
    manager.remove(_playEasyButtonHandle);
    manager.remove(_playMediumButtonHandle);
    manager.remove(_playHardButtonHandle);

    _playEasyButtonHandle   = 0u;
    _playMediumButtonHandle = 0u;
    _playHardButtonHandle   = 0u;
}

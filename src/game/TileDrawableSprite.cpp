#include "TileDrawableSprite.h"
#include <engine/App.h>
#include <engine/stdincl.h>

#include <iostream>
#include <string>

TileDrawableSprite::TileDrawableSprite() :  _coveredTexture(0), _uncoveredTexture(0), _mineTexture(0), _flagTexture(0), _qmarkTexture(0),
                                            _colorLookUp(0), _adjacentCount(0), _hasMine(false), _stateManager(this), _showCount(false)
{
    load();

    //define minesweeper number colors:
    _colorLookUp = new sf::Color[9];
    _colorLookUp[0] = sf::Color::White;
    _colorLookUp[1] = sf::Color::Blue;
    _colorLookUp[2] = sf::Color::Green;
    _colorLookUp[3] = sf::Color::Red;
    _colorLookUp[4] = sf::Color(155, 48, 255, 255);
    _colorLookUp[5] = sf::Color(205, 41, 144, 255);
    _colorLookUp[6] = sf::Color(0, 197, 205, 255);
    _colorLookUp[7] = sf::Color::Black;
    _colorLookUp[8] = sf::Color(189, 189, 189, 255);
}

TileDrawableSprite::~TileDrawableSprite()
{
    delete [] _colorLookUp;
}

void TileDrawableSprite::load()
{
    if ((_coveredTexture = App::getInstance()->getTextureManager().getTexture("textures/covered.png")) and
        (_uncoveredTexture = App::getInstance()->getTextureManager().getTexture("textures/uncovered.png")) and
        (_mineTexture = App::getInstance()->getTextureManager().getTexture("textures/mine.png")) and
        (_flagTexture = App::getInstance()->getTextureManager().getTexture("textures/flag.png")) and
        (_qmarkTexture = App::getInstance()->getTextureManager().getTexture("textures/qmark.png")))
    {
        _isLoaded = true;
        getSprite().setTexture(*_coveredTexture);
    }
}

void TileDrawableSprite::setPosition(float x, float y)
{
    getSprite().setPosition(x, y);
}

void TileDrawableSprite::draw(sf::RenderWindow& window)
{
    if (_isLoaded)
    {
        window.draw(getSprite());

        if (_showCount)
        {
            //Retarded implementation, doesn't work any other way :S
            sf::Text text = sf::Text(std::to_string(_adjacentCount));
            text.setCharacterSize(15);
            text.setPosition(getSprite().getPosition().x + 5.0, getSprite().getPosition().y);
            text.setColor(_colorLookUp[_adjacentCount]);

            window.draw(text);
        }
    }
}

bool TileDrawableSprite::leftClick()
{
    return _stateManager.leftClick(this);
}

bool TileDrawableSprite::rightClick()
{
    return _stateManager.rightClick(this);
}

void TileDrawableSprite::setActiveSprite(int id)
{
    switch (id)
    {
        case TileStateManager::Covered  :   getSprite().setTexture(*_coveredTexture);
                                            break;

        case TileStateManager::Uncovered:   getSprite().setTexture(*_uncoveredTexture);
                                            break;

        case TileStateManager::Mine     :   getSprite().setTexture(*_mineTexture);
                                            break;

        case TileStateManager::Flagged  :   getSprite().setTexture(*_flagTexture);
                                            break;

        case TileStateManager::Uncertain:   getSprite().setTexture(*_qmarkTexture);
                                            break;
    }
}

bool TileDrawableSprite::hasMine() const
{
    return _hasMine;
}

void TileDrawableSprite::placeMine()
{
    _hasMine = true;
}

const int TileDrawableSprite::getState() const
{
    return _stateManager.getState();
}

void TileDrawableSprite::displayCount(int count)
{
    if (getState() == TileStateManager::Uncovered)
    {
        _showCount = true;
        _adjacentCount = count;
    }
}

void TileDrawableSprite::hideCount()
{
    _showCount = false;
}

int TileDrawableSprite::getCount() const
{
    return _adjacentCount;
}

void TileDrawableSprite::setState(int state)
{
    _stateManager.changeState(state);
}

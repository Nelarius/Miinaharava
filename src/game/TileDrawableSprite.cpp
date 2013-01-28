#include "TileDrawableSprite.h"
#include <engine/App.h>
#include <engine/stdincl.h>

#include <iostream>

TileDrawableSprite::TileDrawableSprite() : _coveredTexture(0), _uncoveredTexture(0), _mineTexture(0), _hasMine(false)
{
    load();
}

TileDrawableSprite::~TileDrawableSprite()
{
    //dtor
}

void TileDrawableSprite::load()
{
    if ((_coveredTexture = App::getInstance()->getTextureManager().getTexture("textures/covered.png")) &&
        (_uncoveredTexture = App::getInstance()->getTextureManager().getTexture("textures/uncovered.png")) &&
        (_mineTexture = App::getInstance()->getTextureManager().getTexture("textures/mine.png")))
    {
        _isLoaded = true;
        getSprite().setTexture(*_coveredTexture);
    }
}

void TileDrawableSprite::setPosition(float x, float y)
{
    getSprite().setPosition(x, y);
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

#include "TileDrawableSprite.h"
#include <engine/App.h>
#include <engine/stdincl.h>

TileDrawableSprite::TileDrawableSprite() : _testTile(0)
{
    //ctor
}

TileDrawableSprite::~TileDrawableSprite()
{
    //dtor
}


void TileDrawableSprite::load()
{
    if ((_testTile = App::getInstance()->getTextureManager().getTexture("textures/test_tile.png")))
    {
        _isLoaded = true;
        getSprite().setTexture(*_testTile);
    }
}

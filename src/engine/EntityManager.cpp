#include "engine/EntityManager.h"
#include "Drawable.h"

#include <algorithm>

EntityManager::EntityManager() : _highestIdAvail(0)
{
    //ctor
}

EntityManager::~EntityManager()
{
    std::for_each(_gameObjects.begin(), _gameObjects.end(), EntityDeallocator());
}

bool EntityManager::add(const unsigned int ident, Entity* entity)
{
    if (ident >= _highestIdAvail)
    {
        _gameObjects.insert(std::pair<const int, Entity*>(ident, entity));
        _highestIdAvail = ident + 1u;

        std::cout << "added entity with ident " << ident << std::endl;

        return true;
    }

    return false;
}

void EntityManager::remove(const unsigned int ident)
{
    std::map<const unsigned int, Entity*>::iterator it = _gameObjects.find(ident);

    if (it != _gameObjects.end())
    {
        delete it->second;
        _gameObjects.erase(it);
    }
}

void EntityManager::removeAll()
{
    std::for_each(_gameObjects.begin(), _gameObjects.end(), EntityDeallocator());
    _gameObjects.clear();
    _highestIdAvail = 0;
}

Entity* EntityManager::getEntity(const unsigned int ident) const
{
    std::map<const unsigned int, Entity*>::const_iterator it = _gameObjects.find(ident);

    if (it == _gameObjects.end())
    {
        return 0;
    }

    return it->second;
}

unsigned int EntityManager::getHighestAvailableIdent() const
{
    return _highestIdAvail;
}

void EntityManager::onLoop()
{
    std::for_each(_gameObjects.begin(), _gameObjects.end(), EntityUpdate());
}

void EntityManager::onRender(sf::RenderWindow& window)
{
    std::map<const unsigned int, Entity*>::iterator it;
    for (it = _gameObjects.begin(); it != _gameObjects.end(); it++)
    {
        Drawable* drawable = it->second->getDrawable();
        //if the entity has a drawable component, then execute the draw-method
        if (drawable)
        {
            drawable->draw(window);
        }
    }
}

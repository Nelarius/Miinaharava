#include "engine/EntityManager.h"

#include <algorithm>

EntityManager::EntityManager()
{
    //ctor
}

EntityManager::~EntityManager()
{
    std::for_each(_gameObjects.begin(), _gameObjects.end(), EntityDeallocator());
}

void EntityManager::add(const int ident, Entity* entity)
{
    _gameObjects.insert(std::pair<const int, Entity*>(ident, entity));
}

void EntityManager::remove(const int ident)
{
    std::map<const int, Entity*>::iterator it = _gameObjects.find(ident);

    if (it != _gameObjects.end())
    {
        delete it->second;
        _gameObjects.erase(it);
    }
}

Entity* EntityManager::getEntity(const int ident) const
{
    std::map<const int, Entity*>::const_iterator it = _gameObjects.find(ident);

    if (it == _gameObjects.end())
    {
        return 0;
    }

    return it->second;
}

void EntityManager::onLoop()
{
    std::for_each(_gameObjects.begin(), _gameObjects.end(), EntityUpdate());
}

void EntityManager::onRender(sf::RenderWindow& window)
{
    std::map<const int, Entity*>::iterator it;
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

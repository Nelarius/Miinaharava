#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include "engine/stdincl.h"
#include "engine/Entity.h"
#include <map>
#include <utility>

class EntityManager
{
    public:
        EntityManager();
        ~EntityManager();

        void add(const int ident, Entity* entity);
        void remove(const int ident);

        Entity* getEntity(const int ident) const;

        void onLoop();
        void onRender(sf::RenderWindow&);

    private:
        std::map<const int, Entity*> _gameObjects;

        ///functors for the for_each loops in the source
        struct EntityDeallocator
        {
            void operator()(const std::pair<const int, Entity*>& p) const
            {
                delete p.second;
            }
        };

        struct EntityUpdate
        {
            void operator()(cont std::pair<const int, Entity*> p)
            {
                Behavior* behavior = p.second->getBehavior();   //get behavior pointer
                //if the entity has a behavior component, then execute it
                if (behavior)
                {
                    behavior->update();
                }
            }
        };
};

#endif // ENTITYMANAGER_H

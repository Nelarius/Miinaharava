#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include "engine/stdincl.h"
#include "engine/Entity.h"
#include <map>
#include <utility>
#include "Behavior.h"

class EntityManager
{
    public:
        EntityManager();
        ~EntityManager();

        bool add(const unsigned int ident, Entity* entity);
        void remove(const unsigned int ident);
        void removeAll();

        Entity* getEntity(const unsigned int ident) const;

        unsigned int getHighestAvailableIdent() const;

        void onLoop();
        void onRender(sf::RenderWindow&);

    private:
        std::map<const unsigned int, Entity*> _gameObjects;
        unsigned int _highestIdAvail;

        ///functors for the for_each loops in the source
        struct EntityDeallocator
        {
            void operator()(const std::pair<const unsigned int, Entity*>& p) const
            {
                delete p.second;
            }
        };

        struct EntityUpdate
        {
            void operator()(const std::pair<const unsigned int, Entity*> p)
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

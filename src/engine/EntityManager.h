#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <engine/stdincl.h>
#include <engine/Entity.h>
#include <map>
#include <utility>
#include <engine/Behavior.h>

#include <iostream>

/// \brief A manager class for Entity-objects.
///
/// This class owns (important!) all objects that are passed to it via the add()-method. It updates al of the
/// entities that are composed of a Behavior-object, and it renders all entities that are composed of a Drawable-object.
class EntityManager
{
    public:
        EntityManager();
        ~EntityManager();

        /// \brief Add an Entity to be managed.
        ///
        /// \param ident The numeric identification of the entity.
        /// \param entity A pointer to the entity ebing added.
        ///
        /// After the entity has been added, any ident lower than the current ident will be unavailable.
        bool add(const unsigned int ident, Entity* entity);

        /// \brief Remove an entity from the manager.
        ///
        /// \param ident The numeric identification of the entity being removed.
        void remove(const unsigned int ident);

        /// \brief Remove all entities that this manager currently manages.
        void removeAll();

        /// \param ident The numeric identification of the entity being removed.
        /// \return A pointer the entity.
        Entity* getEntity(const unsigned int ident) const;

        /// \brief Get the currently highest numeric identification that is available.
        /// \return The highest available numeric identification.
        unsigned int getHighestAvailableIdent() const;

        /// \brief For each Entity composed of a Behavior, calls the update-method.
        void onLoop();

        /// \brief For each Entity composed of a Drawable, calls the draw-method.
        /// \param window The sf::RenderWindow currently being rendered to.
        void onRender(sf::RenderWindow& window);

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
            void operator()(const std::pair<const unsigned int, Entity*>& p)
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

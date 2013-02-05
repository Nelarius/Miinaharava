#ifndef ENTITY_H
#define ENTITY_H

#include <engine/Behavior.h>
#include <engine/Drawable.h>

/// \brief A generic entity model, composed of a behavior and a drawable.
class Entity
{
    public:
        Entity();
        virtual ~Entity();

        /// \brief
        /// \return A pointer to the Behavior-object owned by this class.
        Behavior* getBehavior() const;

        /// \brief
        /// \return A pointer to the Drawable-object owned by this class.
        Drawable* getDrawable() const;

    protected:
        Behavior* _entityBehavior;
        Drawable* _entityDrawable;
};

#endif // ENTITY_H

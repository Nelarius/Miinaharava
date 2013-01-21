#ifndef ENTITY_H
#define ENTITY_H

class Behavior;
class Drawable;

/// \brief A type of container for game components.
///
/// This class is a container of sorts for the two types of
/// game components: behaviors and drawables. This class is to be
/// inherited from.
///

class Entity
{
    public:
        Entity();
        virtual ~Entity();

        Behavior* getBehavior() const;
        Drawable* getDrawable() const;

    protected:
        Behavior* _entityBehavior;
        Drawable* _entityDrawable;
};

#endif // ENTITY_H

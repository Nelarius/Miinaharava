#ifndef BEHAVIOR_H
#define BEHAVIOR_H

/// \brief This class models a generic behavior type.
class Behavior
{
    public:
        Behavior();
        virtual ~Behavior();

        /// \brief This method is called before rendering on each update loop.
        virtual void update() = 0;
};

#endif // BEHAVIOR_H

#ifndef CHARACTER_H
#define CHARACTER_H

#include "movable.h"

namespace pgm {

class Character : public Movable {

public:
    Character() {}
    virtual ~Character() {}

private:

    virtual void Move(const Vec2f &deltha) = 0;

    virtual void SetPosition(const Vec2f &position) = 0;

    virtual const Vec2f & Position() const = 0;

};
} /* pgm */

#endif /* CHARACTER_H */

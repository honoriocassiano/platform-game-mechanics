#include "commontypes.h"

namespace pgm {

class Movable {

public:

    Movable() {}
    virtual ~Movable() {}

    virtual void Move(const Vec2f &deltha) = 0;

    virtual void SetPosition(const Vec2f &position) = 0;

    virtual const Vec2f & Position() const = 0;
};

}

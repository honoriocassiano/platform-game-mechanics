#ifndef SFMLCHARACTER_H
#define SFMLCHARACTER_H

#include "character.h"

namespace pgm {

class SFMLCharacter : public Character {

public:
    SFMLCharacter();

    virtual ~SFMLCharacter();

    void Move(const Vec2f &deltha) override;

    void SetPosition(const Vec2f &position) override;

    const Vec2f & Position() const override {
        return position;
    }

private:
    Vec2f position;

};
} /*  pgm */


#endif /* SFMLCHARACTER_H */

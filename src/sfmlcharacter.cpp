#include "sfmlcharacter.h"

pgm::SFMLCharacter::SFMLCharacter() {

}

pgm::SFMLCharacter::~SFMLCharacter() {

}

void pgm::SFMLCharacter::Move(const pgm::Vec2f &deltha) {
    position += deltha;
}

void pgm::SFMLCharacter::SetPosition(const pgm::Vec2f &_position) {
    position = _position;
}


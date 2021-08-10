#include "cPlayer.h"

const double cPlayer::Speed = 5.0;

cPlayer::cPlayer() :
    pos(320.0, 240.0)
{
}


void cPlayer::update() {
    // è„â∫ç∂âEÉLÅ[Ç≈à⁄ìÆ
    if (KeyLeft.pressed()) {
        pos.x -= Speed;
    }
    if (KeyRight.pressed()) {
        pos.x += Speed;
    }
    if (KeyUp.pressed()) {
        pos.y -= Speed;
    }
    if (KeyDown.pressed()) {
        pos.y += Speed;
    }
}

void cPlayer::draw() {
    Circle(pos, 30.0).draw(Color(0, 0, 255));
}
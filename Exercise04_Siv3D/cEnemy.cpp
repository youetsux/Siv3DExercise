#include "cEnemy.h"




cEnemy::cEnemy(const Vec2& _pos) :
    pos(_pos),
    velocity(0.0, 0.0)
{
}


void cEnemy::getPlayerPointer(cPlayer* _pl)
{
    m_player = _pl;
}

void cEnemy::update() {
    Vec2 p = m_player->pos - pos;
    p = p.normalize();
    velocity = p * 1.5;
    pos += velocity;
}

void cEnemy::draw() {
    Circle(pos, 30.0).draw(Color(255, 0, 0));
}
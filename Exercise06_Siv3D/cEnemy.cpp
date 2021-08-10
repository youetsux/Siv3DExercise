#include "cEnemy.h"

cEnemy::cEnemy(const Vec2& _pos) :
    pos(_pos),
    velocity(RandomVec2(5.0))
{
    c = Color(Random(255), Random(255), Random(255), Random(255));
    // RandomVec2(double length)
    // ”¼Œalength(¡‰ñ‚Í5.0)‚Ì2ŸŒ³ƒxƒNƒgƒ‹‚ğ•Ô‚·
}

void cEnemy::update() {
    pos += velocity;
    //if (pos.x < 0 || pos.x > 800)
    //{
    //    velocity.x = -velocity.x;
    //}
    //if (pos.y < 0 || pos.y > 600)
    //{
    //    velocity.y = -velocity.y;
    //}

}   

void cEnemy::draw() {
    Circle(pos, 30.0).draw(c);
}

#pragma once
#include <Siv3D.hpp>

class cEnemy
{
public:
    Vec2 pos;
    Vec2 velocity;
    Color c;
    cEnemy(const Vec2& _pos);
    void update();
    void draw();
};


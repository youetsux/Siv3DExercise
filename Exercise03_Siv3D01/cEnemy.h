#pragma once
#include "cCharacter.h"
class cEnemy :
    public cCharacter
{
    Vec2 m_velocity;
public:
    cEnemy(Vec2 _pos);
    cEnemy();
    void setEnemy(Vec2 _pos, Vec2 _vel, double _rad, Color c);
    void update() override;
};


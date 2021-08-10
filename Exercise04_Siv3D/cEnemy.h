#pragma once
#include <Siv3D.hpp>
#include "cPlayer.h"

class cEnemy {
    cPlayer *m_player;
public:
    Vec2 pos;
    Vec2 velocity;
    void getPlayerPointer(cPlayer* _pl);
    cEnemy(const Vec2& _pos);
    void update();
    void draw();
};
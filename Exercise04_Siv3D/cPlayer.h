#pragma once
#include <Siv3D.hpp>

class cPlayer {
public:
    static const double Speed;
    Vec2 pos;
    cPlayer();
    void update();
    void draw();
};
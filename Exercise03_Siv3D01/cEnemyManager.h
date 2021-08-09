#pragma once
#include <vector>
#include <siv3D.hpp>
#include "cEnemy.h"

class cEnemyManager
{
public:
    std::vector<cEnemy> enemies;
    void update();
    void draw();
    void add(cEnemy enemy);
};


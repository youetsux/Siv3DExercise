#pragma once
#include <vector>
#include <siv3D.hpp>
#include "cEnemy.h"
using std::vector;

class cEnemyManager
{
    vector<cEnemy> m_enemies;
public:
    int getSize();
    void update();
    void draw();
    void add(cEnemy enemy);
};


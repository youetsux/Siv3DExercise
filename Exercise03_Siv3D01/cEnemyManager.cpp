#include "cEnemyManager.h"


void cEnemyManager::update()
{
    for (auto i = m_enemies.begin();
        i != m_enemies.end();i++)
    {
        i->update();
    }
}

void cEnemyManager::draw()
{
    for (auto i = m_enemies.begin();
        i != m_enemies.end(); i++)
    {
        i->draw();
    }
}

void cEnemyManager::add(cEnemy enemy)
{
    m_enemies.push_back(enemy);
}

int cEnemyManager::getSize()
{
    return(m_enemies.size());
}

#include "cEnemy.h"

void cEnemy::update()
{
	//ここを実装
		//下方向に移動
	const double dx = 30.0 + (800 - 60) * Periodic::Triangle0_1(40.0s);
	const double dy = 30.0 + (600 - 60) * Periodic::Triangle0_1(20.0s);
	m_position.x = dx;
	m_position.y = dy;
	m_col = Color(20, 120, 255, 200);
	this->draw();
}
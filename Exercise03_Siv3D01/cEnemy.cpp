#include "cEnemy.h"

cEnemy::cEnemy(Vec2 _pos):
	cCharacter(_pos),
	m_velocity(1.0, 1.0)
{
	m_radius = 30;
	m_col = Color(20, 120, 255, 200);
}

cEnemy::cEnemy() {
}
void cEnemy::setEnemy(Vec2 _pos, Vec2 _vel, double _rad, Color _col)
{
	m_position = _pos;
	m_velocity = _vel;
	m_radius = _rad;
	m_col = _col;
}

void cEnemy::update()
{
	//‚±‚±‚ðŽÀ‘•
		//‰º•ûŒü‚ÉˆÚ“®
	//const double dx = 30.0 + (800 - 60) * Periodic::Triangle0_1(40.0s);
	//const double dy = 30.0 + (600 - 60) * Periodic::Triangle0_1(20.0s);
	//m_position.x = dx;
	//m_position.y = dy;
	m_position += m_velocity;
	
}
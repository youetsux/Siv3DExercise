#include "cCharacter.h"
//Vec2 m_position;
//double m_radius;
//Color m_col;
cCharacter::cCharacter()
{
	m_position = Vec2(0, 0);
	m_radius = 10.0;
	m_col = Color(255, 0, 0, 200);
}
void cCharacter::draw()
{
	Circle(m_position, m_radius).draw(m_col);
		//Circle(x, y, 30.0).draw(Color(0, 0, 255, 200));
}

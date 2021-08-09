#include "cPlayer.h"

void cPlayer::update()
{
	if (KeyLeft.pressed())
	{
		
		m_position.x += -5;
	}
	if (KeyRight.pressed())
	{
		m_position.x += +5;
	}
	if (KeyUp.pressed())
	{
		m_position.y += -5;
	}
	if (KeyDown.pressed())
	{
		m_position.y += +5;
	}
}
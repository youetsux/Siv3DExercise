#pragma once
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

class cCharacter
{
protected:
	Vec2 m_position;
	double m_radius;
	Color m_col;
public:
	cCharacter();
	virtual void update() = 0;
	void draw();
};


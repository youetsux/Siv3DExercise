//C++Siv3D“ü–åuÀ Vol.03 vector‚ÌŠî–{
//–â‘è‚RD
#include "Vector2.h"
#include <iostream>
#include <vector>

int main()
{
	srand((unsigned int)time(nullptr));
	using std::vector;
	using std::cout;
	using std::endl;
	vector<Vector2 *> v;
	for (auto i = 0; i < 10; i++)
	{
		v.push_back(new Vector2(rand() % 600, rand() % 400));
	}

	for (auto i : v)
	{
		cout << "(x, y) = ( " << i->x << ", " << i->y << " )" << endl;
	}
}
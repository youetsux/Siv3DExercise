//C++Siv3D入門講座 Vol.03 vectorの基本
//問題３．
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
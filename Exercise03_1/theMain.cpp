// C++Siv3D“ü–åuÀ Vol.03 vector‚ÌŠî–{

#include "Myclass.h"
#include <iostream>
#include <vector>


int main()
{
	srand((unsigned int)time(nullptr));
	using std::vector;
	vector<int> rnum;
	vector<Myclass> mc;
	
	for (auto i = 0; i < 10; i++)
	{
		rnum.push_back(rand() % 10);
	}
	for (auto i : rnum)
	{
		std::cout << i << " ";
	}
	
	for (auto i = 0; i < 10; i++) {
		Myclass m = Myclass(rand() % 10);
		mc.push_back(m);
	}

	for (auto i : mc)
	{
		i.show();
	}

	return 0;
}
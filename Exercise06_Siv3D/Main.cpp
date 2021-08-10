//
//C++Siv3D入門講座 Vol.06 イテレータ・vector要素の削除

# include <Siv3D.hpp> // OpenSiv3D v0.4.3
# include "cEnemy.h"
# include <vector>

void Main()
{
	using std::cout;
	using std::endl;
	using std::vector;

	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	// 大きさ 60 のフォントを用意
	const Font font(20);
	vector<cEnemy> enlist;
	for (auto i = 0; i < 500; i++)
	{
		enlist.emplace_back(RandomVec2(600, 400));
	}

	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Scene::Center(), Palette::Black);
		for (auto i = enlist.begin(); i != enlist.end(); i++)
		{
			i->update();
		}
		for (auto i = enlist.begin(); i != enlist.end();)
		{
			if (i->pos.x < 0 || i->pos.x > 800 || i->pos.y < 0 || i->pos.y > 600)
			{
				i=enlist.erase(i);
			}
			else
			{
				++i;
			}
		}
		for (auto i = enlist.begin(); i != enlist.end();i++)
		{
			i->draw();
		}
		if (enlist.size() < 500) {
			while (enlist.size() <= 500)
			{
				enlist.emplace_back(RandomVec2(600, 400));
			}
		}
	}
}



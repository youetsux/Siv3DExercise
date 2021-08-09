//C++Siv3D入門講座 Vol.03 vectorの基本
//Siv3D演習問題
//
# include <Siv3D.hpp> // OpenSiv3D v0.4.3
#include "cPlayer.h"
#include "cEnemy.h"
#include <vector>


void Main() {
	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));
	using std::cout;
	using std::endl;
	using std::vector;
	srand((unsigned int)time(nullptr));
	// 大きさ 60 のフォントを用意
	const Font font(20);
	cPlayer* player = new cPlayer();
	//cEnemy* enemy = new cEnemy(Vec2(0,0));
	vector<cEnemy*> enemy;
	for (auto i = 0; i < 10; i++) {
		cEnemy* en = new cEnemy;
		en->setEnemy(Vec2(rand() % 600, rand() % 400), Vec2(rand() % 5, rand() % 5),
			rand() % 50, Color(rand() % 255, rand() % 255, rand() % 255, rand() % 255));
		enemy.push_back(en);
	}
	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Scene::Center(), Palette::Black);

		player->update();
		for (auto i : enemy)
		{
			i->update();
		}
		if (KeyZ.down())
		{
			cEnemy* en = new cEnemy;
			en->setEnemy(Vec2(rand() % 600, rand() % 400), Vec2(rand() % 5, rand() % 5),
				rand() % 50, Color(rand() % 255, rand() % 255, rand() % 255, rand() % 255));
			enemy.push_back(en);
			en->update();
		}
		//enemy->update();
	}
}
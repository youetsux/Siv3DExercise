
# include <Siv3D.hpp> // OpenSiv3D v0.4.3
# include "cPlayer.h"
# include "cEnemy.h"

void Main()
{
	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	// 大きさ 60 のフォントを用意
	const Font font(20);
	cPlayer* player = new cPlayer();
	cEnemy* enemy = new cEnemy();

	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Scene::Center(), Palette::Black);

		player->update();
		enemy->update();
	}
}

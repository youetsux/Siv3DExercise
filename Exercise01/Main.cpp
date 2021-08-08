
# include <Siv3D.hpp> // OpenSiv3D v0.4.3


class Player {
	double x, y, speed;
public:
	Player() {
		x = 320.0;
		y = 240.0;
		speed = 5.0;
	}
	void update() 
	{
		if (KeyLeft.pressed())
		{
			x+= - 5;
		}
		if (KeyRight.pressed())
		{
			x+= + 5;
		}
		if (KeyUp.pressed())
		{
			y += - 5;
		}
		if (KeyDown.pressed())
		{
			y += + 5;
		}
	
		draw();
	}

	void draw()
	{
		Circle(x, y, 30.0).draw(Color(0, 0, 255, 200));
	}
	
};


class Enemy {
public:
	double x, y;

	Enemy()
	{
		x = 0.0;
		y = 0.0;
	}
	Enemy(Vec2 p)
	{
		x = p.x;
		y = p.y;
	}
	void update() {
		//ここを実装
		//下方向に移動
		const double dx = 30.0 + (800-60) * Periodic::Triangle0_1(40.0s);
		const double dy = 30.0 + (600-60) * Periodic::Triangle0_1(20.0s);
		x = dx;
		y = dy;
		draw();
	}
	//敵（円）を描画
	void draw() {
		Circle(x, y, 30.0).draw(Color(255, 0, 0));
	}
};
void Main()
{
	Player* player = new Player();
	Enemy * en = new Enemy();
	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	// 大きさ 60 のフォントを用意
	const Font font(20);

	// 猫の座標
	Vec2 pos = Vec2(640, 450);

	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Scene::Center(), Palette::Black);

		en->update();
		player->update();
		
	}
}

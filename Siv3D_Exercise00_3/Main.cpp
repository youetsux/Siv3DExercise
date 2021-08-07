
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

void Main()
{
	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));

	// 大きさ 60 のフォントを用意
	const Font font(20);
	Point  p(Scene::Center());
	
	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Point(20,20), Palette::Black);

		if (KeyLeft.pressed())
		{
			p.x = p.x - 5;
		}
		if (KeyRight.pressed())
		{
			p.x = p.x + 5;
		}
		if (KeyUp.pressed())
		{
			p.y = p.y - 5;
		}
		if (KeyDown.pressed())
		{
			p.y = p.y + 5;
		}

		if (KeyZ.pressed())
		{
			double px = Random(-30.0, 30.0);
			double py = Random(-30.0, 30.0);
			p.x += px;
			p.y += py;
			
		}
		// マウスカーソルに追従する半透明の赤い円を描く
		Color c(255, 0, 0);
		Circle(p, 20).draw(c);

	}
}

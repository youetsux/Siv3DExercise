
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

void Main()
{
	// Fontクラスのインスタンスを生成。フォントサイズは18を指定
	const Font font(18);

	while (System::Update())
	{
		// マウス座標を取得
		int mouseX = Cursor::Pos().x;
		int mouseY = Cursor::Pos().y;

		// マウスの座標を文字として描画
		font(U"MouseX:", mouseX, U" MouseY:", mouseY).draw();

		// マウスのある位置にオレンジの円を描画
		Circle(mouseX, mouseY, 50).draw(Color(255, 128, 0));
	}  // Fontクラスのインスタンスを生成。フォントサイズは18を指定


	while (System::Update())
	{
		// マウス座標を取得
		int mouseX = Cursor::Pos().x;
		int mouseY = Cursor::Pos().y;

		// マウスの座標を文字として描画
		font(U"MouseX:", mouseX, U" MouseY:", mouseY).draw();

		// マウスのある位置にオレンジの円を描画
		Circle(mouseX, mouseY, 50).draw(Color(255, 128, 0));
	}
}

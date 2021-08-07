
# include <Siv3D.hpp> // OpenSiv3D v0.4.3

void Main()
{
    // Fontクラスのインスタンスを生成。フォントサイズは18を指定
    const Font font(18);

    int num = 0;

    while (System::Update())
    {
        // zキーを押している間numが1ずつ増加
        if (KeyZ.pressed()) {
            num += 1;
        }

        // xキーを押すとnumが100増加
        if (KeyX.down()) {
            num += 100;
        }

        // cキーを押すとnumが0~100の間のランダムな数に
        if (KeyC.down()) {
            num = Random(0, 100);
        }

        font(U"Num:", num).draw();
    }
}

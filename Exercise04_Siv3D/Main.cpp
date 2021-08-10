
//C++Siv3D入門講座 Vol.04 参照・クラスのポインタ
//演習問題(Siv3D)
//今回は、これまでコードを書いてきたプロジェクトとは別に、プロジェクトを作ることを推奨します。
//以下の様なPlayerクラスとEnemyクラスを用意した。PlayerクラスとEnemyクラスのインスタンスを作り、動作を確認せよ。
//EnemyがPlayerの方向に移動するようにしたい。Enemyクラスが「Playerクラスへのポインタ」をメンバに持つようにして、PlayerクラスとEnemyクラスのインスタンスを生成した後にEnemyのインスタンスににPlayerのインスタンスのポインタを渡し、そのポインタからPlayerクラスのx, yにアクセスすることでEnemyがPlayerの位置を取得し、その方向に移動できるようにせよ。
//
//（今回は、敵の追尾は大まかでも良い。例：PlayerのxがEnemyのxより大きければEnemyは右に、そうでなければ左に動く…など）


# include <Siv3D.hpp> // OpenSiv3D v0.4.3
# include "cEnemy.h"
# include "cPlayer.h"

void Main()
{
	// 背景を水色にする
	Scene::SetBackground(ColorF(0.8, 0.9, 1.0));
	cEnemy enemy(Vec2(0.0,0.0));
	cPlayer player;

	enemy.getPlayerPointer(&player);

	// 大きさ 20 のフォントを用意
	const Font font(20);

	while (System::Update())
	{
		// テキストを画面の中心に描く
		font(U"Hello, Siv3D!🐣").drawAt(Scene::Center(), Palette::Black);
		enemy.update();
		enemy.draw();
		player.update();
		player.draw();

		
	}
}

//
// = アドバイス =
// Debug ビルドではプログラムの最適化がオフになります。
// 実行速度が遅いと感じた場合は Release ビルドを試しましょう。
// アプリをリリースするときにも、Release ビルドにするのを忘れないように！
//
// 思ったように動作しない場合は「デバッグの開始」でプログラムを実行すると、
// 出力ウィンドウに詳細なログが表示されるので、エラーの原因を見つけやすくなります。
//
// = お役立ちリンク =
//
// OpenSiv3D リファレンス
// https://siv3d.github.io/ja-jp/
//
// チュートリアル
// https://siv3d.github.io/ja-jp/tutorial/basic/
//
// よくある間違い
// https://siv3d.github.io/ja-jp/articles/mistakes/
//
// サポートについて
// https://siv3d.github.io/ja-jp/support/support/
//
// Siv3D ユーザコミュニティ Slack への参加
// https://siv3d.github.io/ja-jp/community/community/
//
// 新機能の提案やバグの報告
// https://github.com/Siv3D/OpenSiv3D/issues
//


//C++Siv3D入門講座 Vol.05 関数オーバーロード・コンストラクタ・デストラクタ
// 
//以下の様なクラスVector2を作った。コンストラクタとデストラクタを作れ。
//コンストラクタ・デストラクタがよばれたら、"～が呼ばれました"と出力するようにせよ。コンストラクタは引数有りのものと引数なし（引数なしの時はx = 0, y = 0)のものを作ること。
//コンストラクタの初期化の部分は今回紹介した形式で書くこと。
#include <iostream>

class Vector2 {
public:
	int x, y;
	Vector2()
	{

	}
	Vector2(int _x, int _y) :
		x(_x), y(_y)
	{

	}
	~Vector2()
	{
		std::cout << "destructor was called" << std::endl;
	}
	//以下にコンストラクタとデストラクタ書く
};

template <typename T> 
T mySquare(T _x) {
	return(_x * _x);
}

int mySquare(int _x);
double mySquare(double _x);
float mySquare(float _x);

int mySquare(int _x)
{
	return(_x * _x);
}
double mySquare(double _x)
{
	return(_x * _x);
}
float mySquare(float _x)
{
	return(_x * _x);
}

int main()
{
	using std::cout;
	using std::endl;


}

//C++Siv3D����u�� Vol.05 �֐��I�[�o�[���[�h�E�R���X�g���N�^�E�f�X�g���N�^
// 
//�ȉ��̗l�ȃN���XVector2��������B�R���X�g���N�^�ƃf�X�g���N�^�����B
//�R���X�g���N�^�E�f�X�g���N�^����΂ꂽ��A"�`���Ă΂�܂���"�Əo�͂���悤�ɂ���B�R���X�g���N�^�͈����L��̂��̂ƈ����Ȃ��i�����Ȃ��̎���x = 0, y = 0)�̂��̂���邱�ƁB
//�R���X�g���N�^�̏������̕����͍���Љ���`���ŏ������ƁB
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
	//�ȉ��ɃR���X�g���N�^�ƃf�X�g���N�^����
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
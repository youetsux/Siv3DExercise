#include "Myclass.h"
#include <iostream>

Myclass::Myclass(int _x) {
	x = _x;
}

void Myclass::show() {
	std::cout << "x �́F" << x << std::endl;
}
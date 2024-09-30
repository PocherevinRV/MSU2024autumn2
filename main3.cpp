#include <iostream>
#include "vect.h"

int main(void)
{
	Vect a(3), b(3), c = a, d = a + b, e, f;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	e = d;
	f = a + b;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	return 0;
}
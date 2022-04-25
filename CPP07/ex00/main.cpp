#include <iostream>
#include "whatever.hpp"

int main()
{
	int a = 10;
	int b = 100;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min = " << ::min(a, b) << std::endl;
	std::cout << "max = " << ::max(a, b) << std::endl;
	return 0;
}

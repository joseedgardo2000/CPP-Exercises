/*
 * main.cpp
 *
 *  Created on: 06/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int a = 10;
	int b{20};
	int c(30);
	int d = (40);
	int e = {50};

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	return 0;
}



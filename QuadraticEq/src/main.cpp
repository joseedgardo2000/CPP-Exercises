/*
 * main.cpp
 *
 *  Created on: 07/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;
	float res1, res2;

	std::cout << "Enter de values a, b and c." << std::endl;
	std::cout << "a: ";
	std::cin >> a;
	std::cout << "b: ";
	std::cin >> b;
	std::cout << "c: ";
	std::cin >> c;
	std::cout << "Resolving de equation: " << a << "x^2 + " << b << "x + "<< c << " = 0 " << std::endl;

	res1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	res2 = (-b - sqrt(b*b-4*a*c))/(2*a);

	std::cout << "Res1: " << res1 << std::endl;
	std::cout << "Res2: " << res2 << std::endl;
}



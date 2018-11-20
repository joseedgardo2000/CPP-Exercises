/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>

template <class T>
T greater(T a, T b)
{
	return a >= b ? a : b;
}

template <class T>
T smaller(T a, T b)
{
	return a <= b ? a : b;
}

template <class T, class T2>
void twoDifferentTipes(T a, T2 b)
{
	std::cout << "Param01: " << a << std::endl;
	std::cout << "Param02: " << b << std::endl;
}

int main()
{
	std::cout << "The greater number (5, 10) is " << greater(5, 10) << std::endl;
	std::cout << "The greater number (55, 15) is " << smaller(55, 15) << std::endl;

	twoDifferentTipes("hello", 5);

	twoDifferentTipes("Every", "Day");


	return 0;
}



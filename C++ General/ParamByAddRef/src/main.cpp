/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

void interChangeByValue(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

void interChangeByAddress(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void interChangeByReference(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp;
}

void cicle(int& e)
{
	for(int i=1; i <= e; i++)
	{
		std::cout << "val: " << i << " ";
	}
	std::cout << std::endl;

	for(int i=1; i <= e; i++)
	{
		std::cout << "val: " << i << " ";
	}
	std::cout << std::endl;

	for(int i=1; i <= e; i++)
	{
		std::cout << "val: " << i << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int x = 20;
	int y = 40;
	int z = 10;

	interChangeByValue(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	interChangeByAddress(&x, &y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	x = 20;
	y = 40;

	interChangeByReference(x, y);
	std::cout << "x: " << x << " y: " << y << std::endl;

	cicle(z);
}




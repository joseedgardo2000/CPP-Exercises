/*
 * main.cpp
 *
 *  Created on: 11/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int a01[5];
	for(int i = 0; i < 5; i++)
	{
		std::cout << "a01[" << i << "]=" << a01[i] << " - ";
	}
	std::cout << std::endl << std::endl;

	int a02[5] = {};
	for(int i = 0; i < 5; i++)
	{
		std::cout << "a02[" << i << "]=" << a02[i] << " - ";
	}
	std::cout << std::endl << std::endl;

	int a03[] = {1,2,3,4,5};
	for(int i = 0; i < 5; i++)
	{
		std::cout << "a03[" << i << "]=" << a03[i] << " - ";
	}
	std::cout << std::endl << std::endl;

	int a04[] = {10,20,30,40,50};
	int j = 0;
	for(int i:a04)
	{
		std::cout << "a04[" << j << "]=" << i << " - ";
		j++;
	}
	std::cout << std::endl << std::endl;

	float a05[] = {10.20,20.55,30.23,40,50};
	j = 0;
	for(auto i:a05)
	{
		std::cout << "a05[" << j << "]=" << i << " - ";
		j++;
	}
	std::cout << std::endl << std::endl;

	return 0;
}




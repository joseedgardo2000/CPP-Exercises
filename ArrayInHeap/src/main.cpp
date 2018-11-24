/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>

int main()
{
	int *p01 = new int[5];
	int *p02 = new int[10];

	p01[0] = 0; p01[1] = 1; p01[2] = 2; p01[3] = 3; p01[4] = 4;

	for(int i=0; i < 10; i++){
		p02[i] = i + 2;
	}

	for(int i=0; i<5 ; i++){
		std::cout << "val: " << p01[i] << " ";
	}

	std::cout << std::endl;

	for(int i=0; i<10 ; i++){
		std::cout << "val: " << p02[i] << " ";
	}

	std::cout << std::endl;

	delete []p01;
	delete []p02;

	p01 = nullptr;
	p02 = nullptr;

	std::cout << "p01: " << p01 << " p02: " << p02 << std::endl;

	return 0;
}


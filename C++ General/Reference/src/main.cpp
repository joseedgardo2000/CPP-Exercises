/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int i = 20;
	int &j = i;
	int k = 10;
	std::cout << "i: " << i << " j: " << j << " k: " << k << std::endl;
	j = k;
	std::cout << "i: " << i << " j: " << j << " k: " << k << std::endl;
	return 0;
}



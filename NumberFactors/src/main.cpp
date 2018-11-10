/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>

int main()
{
	int number;
	std::cout << "Enter the number to get the factors: ";
	std::cin >> number;

	for(int i=1, j=1; i<=number; i++)
	{
		if(number%i == 0)
		{
			std::cout << "fator: [" << j << "]: " << i << std::endl;
			j++;
		}
	}
	return 0;
}


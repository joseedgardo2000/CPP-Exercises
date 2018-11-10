/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *      Author: Jose Edgardo
 */

#include <iostream>

int main()
{
	int number;
	int numFactors;

	std::cout << "Enter the number to know if it is prime or compose: ";
	std::cin >> number;
	for(int i = 1; i <= number; i++)
	{
		if(number%i == 0)
		{
			numFactors++;
		}
	}
	if(numFactors > 2)
	{
		std::cout << "The number " << number << " is compose" << std::endl;
	}
	else
	{
		std::cout << "The number " << number << " is prime" << std::endl;
	}
	return 0;
}



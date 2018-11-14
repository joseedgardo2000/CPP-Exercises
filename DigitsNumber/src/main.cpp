/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int number, rest, pasNumber, i=1;
	std::cout << "Enter the number to get the digits: ";
	std::cin >> number;
	pasNumber = number;

	do
	{
		rest = pasNumber%10;
		pasNumber/=10;
		std::cout << "Digit["<< i++ <<"]: " << rest << std::endl;
	}
	while(pasNumber);

	return 0;
}


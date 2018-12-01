/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int number, pasNumber, rest, invNumber=0;

	std::cout << "Enter a number: ";
	std::cin >> number;
	pasNumber = number;
	do{
		invNumber*=10;
		rest=pasNumber%10;
		invNumber+=rest;
		pasNumber /=10;
	} while(pasNumber);

	std::cout <<"Original Number "<< number << " and Inverse Number: " << invNumber << " are ";
	if(invNumber == number)
	{
		std::cout << "palindrome";
	}
	else
	{
		std::cout << "not palindrome";
	}
	return 0;
}

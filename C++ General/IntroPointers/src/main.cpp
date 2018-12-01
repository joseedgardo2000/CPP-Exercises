/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>

int main()
{
	int value01 = 10;
	int* pointer = &value01;
	int value02 = *pointer;

	std::cout << "value01: " << value01 << std::endl;
	std::cout << "&value01: " << &value01 << std::endl;
	std::cout << "value02: " << value02 << std::endl;
	std::cout << "pointer: " << pointer << std::endl;
	std::cout << "*pointer: " << *pointer << std::endl;

	std::cout << "-------------------------------" << std::endl;

	*pointer = 20;
	std::cout << "value01: " << value01 << std::endl;
	std::cout << "&value01: " << &value01 << std::endl;
	std::cout << "value02: " << value02 << std::endl;
	std::cout << "pointer: " << pointer << std::endl;
	std::cout << "*pointer: " << *pointer << std::endl;
}



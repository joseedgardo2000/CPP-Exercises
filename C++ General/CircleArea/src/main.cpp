/*
 * main.cpp
 *
 *  Created on: 07/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	float radius;
	float area;
	float PI = 3.1416f;

	std::cout << "Enter radius: " << std::endl;
	std::cin >> radius;

	area = PI * radius * radius;

	std::cout << "Circle area: " << area;

}



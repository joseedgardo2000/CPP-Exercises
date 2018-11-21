/*
 * main.cpp
 *
 *  Created on: 21/11/2018
 *      Author: Jose Edgardo
 */

#include <iostream>
#include "VerySimpleClass/Rectangle.h"

int main()
{
	std::cout << ">>>> VerySimpleClass <<<<" << std::endl;
	Rectangle r1, r2;

	r1.base = 10;
	r1.height = 40;
	std::cout << "r1.area: " << r1.area() << std::endl;
	std::cout << "r1.perimeter: " << r1.perimeter() << std::endl;

	r2.base = 20;
	r2.height = 50;
	std::cout << "r1.area: " << r2.area() << std::endl;
	std::cout << "r2.perimeter: " << r2.perimeter() << std::endl;
}


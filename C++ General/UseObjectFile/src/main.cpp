/*
 * main.cpp
 *
 *  Created on: 22/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include "VerySimpleClass/Rectangle.h"

int main()
{
	Rectangle r1;
	Rectangle* p1;

	r1.base = 10;
	r1.height = 40;

	std::cout << ">>>> UseObjectFile <<<<" << std::endl;

	std::cout << "r1.area: " << r1.area() << std::endl;
	std::cout << "r1.perimeter: " << r1.perimeter() << std::endl;

	p1 = new Rectangle;
	p1->base = 100;
	p1->height = 400;

	std::cout << "p1->area: " << p1->area() << std::endl;
	std::cout << "p1->perimeter: " << p1->perimeter() << std::endl;


	return 0;
}



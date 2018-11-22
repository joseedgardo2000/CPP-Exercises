/*
 * main.cpp
 *
 *  Created on: 21/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>
#include "PointersToObject/Rectangle.h"

int main()
{
	Rectangle r1;
	Rectangle* p1;
	Rectangle* p2;

	r1.base = 50;
	r1.height = 100;

	p1 = &r1;

	std::cout << ">>>> PointersToObject <<<<" << std::endl;

	std::cout << "p1->area: " << p1->area() << std::endl;
	std::cout << "p1->perimeter: " << p1->perimeter() << std::endl;

	p2 = new Rectangle;

	p2->base = 500;
	p2->height = 1000;

	std::cout << "p2->area: " << p2->area() << std::endl;
	std::cout << "p2->perimeter: " << p2->perimeter() << std::endl;

	delete p2;

	return 0;
}



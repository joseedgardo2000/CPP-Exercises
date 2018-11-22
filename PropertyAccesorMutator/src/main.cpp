/*
 * main.cpp
 *
 *  Created on: 22/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include "PropertyAccesorMutator/Rectangle.h"

int main()
{
	std::cout << ">>>> VerySimpleClass <<<<" << std::endl;
	Rectangle r1, r2;

	r1.setBase(10.0f);
	r1.setHeight(40.0f);

	r2.setBase(100.0f);
	r2.setHeight(-400.0f);

	std::cout << "r1.area: " << r1.area() << std::endl;
	std::cout << "r1.perimeter: " << r1.perimeter() << std::endl;

	std::cout << "r2.area: " << r2.area() << std::endl;
	std::cout << "r2.perimeter: " << r2.perimeter() << std::endl;

}



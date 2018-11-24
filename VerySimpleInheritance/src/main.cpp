/*
 * main.cpp
 *
 *  Created on: 24/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include "VerySimpleInheritance/Base.h"
#include "VerySimpleInheritance/Derivated.h"

int main()
{
	Base b;
	Derivated d;
	std::cout << ">>>> Very Simple Inheritance <<<<" << std::endl;

	b.setX(67);
	d.setX(56);
	d.setY(34);

	b.display();
	d.display();

}



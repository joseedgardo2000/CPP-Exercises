/*
 * main.cpp
 *
 *  Created on: 24/11/2018
 *      Author: José Edgardo Morales Barroso
 */



#include <iostream>

#include "InheritedConstructor/Derivated.h"
#include "InheritedConstructor/Base.h"

int main()
{
	std::cout << ">>>> Inherited Constructor <<<<" << std::endl;

	Base a;
	a.display();
	std::cout << "-------------------------------" << std::endl;
	Base b(20);
	b.display();
	std::cout << "-------------------------------" << std::endl;
	Derivated c;
	c.display();
	std::cout << "-------------------------------" << std::endl;
	Derivated d(30);
	d.display();
	std::cout << "-------------------------------" << std::endl;
	Derivated e(40,50);
	e.display();
	std::cout << "-------------------------------" << std::endl;


	return 0;
}

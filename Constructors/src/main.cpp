/*
 * main.cpp
 *
 *  Created on: 23/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>
#include "Constructors/Rectangle.h"

int main()
{
	std::cout << ">>>> Constructors <<<<" << std::endl;
	Rectangle r1;
	Rectangle r2(80.0f);
	Rectangle r3(20,30);
	Rectangle r4(r3);

	r1.print();
	r2.print();
	r3.print();
	r4.print();
}



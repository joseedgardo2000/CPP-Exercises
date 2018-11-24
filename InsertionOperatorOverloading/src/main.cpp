/*
 * main.cpp
 *
 *  Created on: 24/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include <InsertionOperatorOverloading/ComplexNumber.h>

int main()
{
	ComplexNumber a(10,20);
	ComplexNumber b(30,40);
	ComplexNumber c;

	std::cout << ">>>> Insertion Operator Overloading <<<<" << std::endl << std::endl;

	a.print();
	b.print();
	c.print();

	c= a + b;

	c.print();

	std::cout << "---------------------------" << std::endl;

	std::cout << a << " - " << b << " - " << c << std::endl;

	return 0;
}



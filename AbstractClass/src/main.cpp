/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */


#include <iostream>

#include "AbstractClass/Base.h"
#include <AbstractClass/Derived.h>

int main()
{
	std::cout << ">>>> Abstract Class <<<<" << std::endl;

	Derived d("Derived b");
	Base* m = new Derived("Base* m = new Derived");
	Base* p ;

	p = &d;

	m->function01();
	p->function01();



	return 0;
}




/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <VirtualFunctions/Base.h>
#include <VirtualFunctions/Derived.h>

int main(){
	std::cout << "Function Overriding" << std::endl;

	Base b(0,"Base b");
	b.display();

	Base c(100, "Base c");
	c.display();

	Derived d(0, "Derived d");
	d.display();

	Derived e(200, "Derived e");
	e.display();
	e.setX(300);
	e.Base::display();

	Base* pBase = new Derived(400, "Base* pBase");
	pBase->display();

	return 0;
}




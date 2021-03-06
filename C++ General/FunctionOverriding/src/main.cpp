/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: Jos� Edgardo Morales Barroso
 */


#include <iostream>
#include <FunctionOverriding/Base.h>
#include <FunctionOverriding/Derived.h>

int main(){
	std::cout << "Function Overriding" << std::endl;

	Base b;
	b.display();

	Base c(100);
	c.display();

	Derived d;
	d.display();

	Derived e(200);
	e.display();
	e.setX(300);
	e.Base::display();

	Base* pBase = new Derived(400);
	pBase->display();

	return 0;
}



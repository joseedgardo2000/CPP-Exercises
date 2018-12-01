/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>

#include "VirtualBases/Base.h"
#include "VirtualBases/ChildDer.h"
#include "VirtualBases/ChildIzq.h"
#include "VirtualBases/GrandChild.h"
#include "VirtualBases/GrandGrandChild.h"

int main(){
	std::cout << ">>>> Virtual Bases <<<<" << std::endl;

	Base b;
	b.display();

	ChildDer d(25);
	d.display();

	ChildIzq i;
	i.display();

	GrandChild e;
	e.display();

	GrandGrandChild ee;
	ee.display();

	return 0;
}

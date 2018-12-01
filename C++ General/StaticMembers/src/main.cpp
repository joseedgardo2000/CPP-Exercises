/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <string>

#include "StaticMembers/ClaseA.h"

int main()
{
	std::cout << ">>>> Static Members <<<<" << std::endl;



	ClaseA a("ClaseA a");
	a.displayCounter();
	ClaseA::displayCounter();

	ClaseA b("ClaseA b");
	b.displayCounter();
	ClaseA::displayCounter();

	ClaseA c("ClaseA c");
	c.displayCounter();
	ClaseA::displayCounter();


	return 0;
}



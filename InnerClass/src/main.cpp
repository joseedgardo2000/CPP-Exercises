/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <string>

#include "InnerClass/External.h"

int main()
{
	std::cout << ">>>> Inner Class <<<<" << std::endl;
	External a("External a");
	External b("External b");
	External c("External c");

	a.functionExternal();
	b.functionExternal();
	c.functionExternal();

	return 0;
}



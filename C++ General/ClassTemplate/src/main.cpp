/*
 * main.cpp
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */


#include <iostream>
#include <string>

#include "ClassTemplate/ClassTemplate.h"

int main()
{
	std::cout << ">>>> Class Template <<<<" << std::endl;
	ClassTemplate<int> a(10);
	a.display();

	ClassTemplate<float> b(10);
	b.display();

	ClassTemplate<std::string> c("Hello");
	c.display();

	ClassTemplate<long> d(10);
	d.display();
}

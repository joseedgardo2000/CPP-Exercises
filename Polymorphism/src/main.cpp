/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <string>

#include "Polymorphism/Base.h"
#include "Polymorphism/Derived.h"

void functionPol(Base* a);

int main()
{
	std::cout << ">>>> Polymorphism <<<<" << std::endl;

	Base a(10, "Base a");
	a.display();
	std::cout << std::endl << "=============================================" << std::endl<< std::endl;
	Derived b(10, "Derived b");
	b.display();

	std::cout << std::endl << "=============================================" << std::endl<< std::endl;

	functionPol(&a);
	functionPol(&b);

	std::cout << std::endl << "=============================================" << std::endl<< std::endl;

	return 0;
}

void functionPol(Base* a){
	std::cout << std::endl << ">>>> functionPol <<<<" << std::endl << std::endl;
	a->display();
}



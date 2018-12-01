/*
 * Derived.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <AbstractClass/Derived.h>

Derived::Derived(std::string name):Base(name) {
	std::cout << "[Constructor Derived] ----->> " << getName() << std::endl;
}

Derived::~Derived() {
	std::cout << "----- [Destructor Derived" << getName() << "] -----" << std::endl;
}

void Derived::function01() {
	std::cout << "----- [Derived function01 - " << getName() << "] -----" << std::endl;
}

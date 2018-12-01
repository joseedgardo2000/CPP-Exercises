/*
 * Derived.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualFunctions/Derived.h>

int Derived::getY() const {
	return y;
}

void Derived::setY(int y) {
	this->y = y;
}

Derived::Derived(int a, std::string name):Base(20, name) {
	setY(a);
}

void Derived::display() {
	std::cout << getName() << " [Derived] ------------------- " << std::endl;
	std::cout << "[Derived] y: " << getY() << std::endl;
}

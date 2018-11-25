/*
 * Derived.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <FunctionOverriding/Derived.h>

int Derived::getY() const {
	return y;
}

void Derived::setY(int y) {
	this->y = y;
}

Derived::Derived(int a) {
	setY(a);
}

void Derived::display() {
	std::cout << "y: " << getY() << std::endl;
}

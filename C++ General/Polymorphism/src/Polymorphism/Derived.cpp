/*
 * Derived.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <Polymorphism/Derived.h>

int Derived::getY() const {
	return y;
}

void Derived::setY(int y) {
	this->y = y;
}

Derived::Derived(int a, std::string name):Base(20, name) {
	std::cout << "---- CONSTRUCTOR Derived ----" << std::endl;
	setY(a);
}

Derived::~Derived() {
	std::cout << "---- DESTRUCTOR Derived ---- {" << getName() << "} ---------------" << std::endl;
}

void Derived::display() {
	std::cout << "--------------- {" << getName() << "} ---------------" << std::endl;
	std::cout << "[Derived] y: " << getY() << std::endl;
}

/*
 * Derivated.cpp
 *
 *  Created on: 24/11/2018
 *      Author: José Edgardo Morales Barroso
 */
#include "InheritedConstructor/Derivated.h"

Derivated::Derivated() {
	std::cout << "Derivated Constructor 1" << std::endl;
	setY(0);
}

Derivated::Derivated(int y) {
	std::cout << "Derivated Constructor 2" << std::endl;
	setY(y);
}

Derivated::Derivated(int x, int y):Base(x) {
	std::cout << "Derivated Constructor 3" << std::endl;
	setY(y);
}

int Derivated::getY() const {
	return y;
}


void Derivated::setY(int y) {
	this->y = y;
}

void Derivated::display() {
	std::cout << "Base x: " << getX() << " Derivated: " << getY() << std::endl;
}

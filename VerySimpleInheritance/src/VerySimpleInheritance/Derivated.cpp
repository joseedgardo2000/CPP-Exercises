/*
 * Derivated.cpp
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#include <VerySimpleInheritance/Derivated.h>

Derivated::Derivated() {
	y = 0;
}

int Derivated::getY() const {
	return y;
}



void Derivated::display() {
	std::cout << "[base] x: " << x << ", [inherated] y: " << y << std::endl;
}

void Derivated::setY(int y) {
	this->y = y;
}

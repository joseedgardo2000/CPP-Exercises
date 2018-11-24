/*
 * Base.cpp
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#include <VerySimpleInheritance/Base.h>

Base::Base() {
	x = 0;

}

int Base::getX() const {
	return x;
}

void Base::setX(int x) {
	this->x = x;
}

void Base::display() {
	std::cout << "x: " << x << std::endl;
}

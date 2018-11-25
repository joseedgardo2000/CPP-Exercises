/*
 * Base.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <FunctionOverriding/Base.h>

int Base::getX() const {
	return x;
}

void Base::setX(int x) {
	this->x = x;
}

Base::Base(int a) {
	setX(a);
}

void Base::display() {
	std::cout << "x: " << getX() << std::endl;
}

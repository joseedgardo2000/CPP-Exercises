/*
 * Base.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualFunctions/Base.h>

int Base::getX() const {
	return x;
}

void Base::setX(int x) {
	this->x = x;
}

Base::Base(int a, std::string name) {
	setX(a);
	setName(name);
}

const std::string& Base::getName() const {
	return name;
}

void Base::setName(const std::string& name) {
	this->name = name;
}

void Base::display() {
	std::cout << getName() << " [Base] --------------------- " << std::endl;
	std::cout << "[Base] x: " << getX() << std::endl;
}

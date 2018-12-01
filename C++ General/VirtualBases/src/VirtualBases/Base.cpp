/*
 * Base.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualBases/Base.h>

Base::Base(int a) {
	setT(a);
	setClassName("Base");
}


const std::string& Base::getClassName() const {
	return className;
}

void Base::setClassName(const std::string& className) {
	this->className = className;
}

int Base::getT() const {
	return t;
}

void Base::setT(int t) {
	this->t = t;
}

void Base::display() {
	std::cout << "----- Base -----" << std::endl;
	std::cout << "Class name: " << getClassName() << std::endl;
	std::cout << "         z: " << getT() << std::endl;
}

/*
 * Child.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualBases/ChildIzq.h>

const std::string& ChildIzq::getClassName() const {
	return className;
}

void ChildIzq::setClassName(const std::string& className) {
	this->className = className;
}

int ChildIzq::getX() const {
	return x;
}

void ChildIzq::setX(int x) {
	this->x = x;
}

ChildIzq::ChildIzq(int a):Base(300) {
	setX(a);
	setClassName("ChildIzq");
}

void ChildIzq::display() {
	std::cout << "----- ChildIzq -----" << std::endl;
		std::cout << "Class name: " << className << std::endl;
		std::cout << "         t: " << getT() << std::endl;
		std::cout << "         x: " << getX() << std::endl;
}

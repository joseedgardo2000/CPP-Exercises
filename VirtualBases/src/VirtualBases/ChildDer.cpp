/*
 * ChildDer.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualBases/ChildDer.h>

ChildDer::ChildDer(int a):Base(100) {
	setY(a);
	setClassName("ChildDer");
}

const std::string& ChildDer::getClassName() const {
	return className;
}

void ChildDer::setClassName(const std::string& className) {
	this->className = className;
}

int ChildDer::getY() const {
	return y;
}

void ChildDer::setY(int y) {
	this->y = y;
}

void ChildDer::display() {
	std::cout << "----- ChildDer -----" << std::endl;
	std::cout << "Class name: " << className << std::endl;
	std::cout << "         t: " << getT() << std::endl;
	std::cout << "         y: " << getY() << std::endl;
}

/*
 * GrandChild.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualBases/GrandChild.h>

GrandChild::GrandChild(int a):Base(1000), ChildDer(3000), ChildIzq(4000) {
	setZ(a);
	className = "GrandChild";
}

int GrandChild::getZ() const {
	return z;
}

void GrandChild::setZ(int z) {
	this->z = z;
}

void GrandChild::display() {
	std::cout << "----- GrandChild -----" << std::endl;
	std::cout << "Class name: " << className << std::endl;
	std::cout << "         t: " << getT() << std::endl;
	std::cout << "         x: " << getX() << std::endl;
	std::cout << "         y: " << getY() << std::endl;
	std::cout << "         z: " << getZ() << std::endl;
}

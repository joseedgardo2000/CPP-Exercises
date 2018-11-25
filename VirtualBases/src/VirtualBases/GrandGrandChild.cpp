/*
 * GrandGrandChild.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <VirtualBases/GrandGrandChild.h>

int GrandGrandChild::getZz() const {
	return zz;
}

void GrandGrandChild::setZz(int zz) {
	this->zz = zz;
}

GrandGrandChild::GrandGrandChild(int a) {
	setZz(a);
	className = "GrandGrandChild";
}

void GrandGrandChild::display() {
	std::cout << "----- GrandGrandChild -----" << std::endl;
		std::cout << "Class name: " << className << std::endl;
		std::cout << "         t: " << getT() << std::endl;
		std::cout << "         x: " << getX() << std::endl;
		std::cout << "         y: " << getY() << std::endl;
		std::cout << "         z: " << getZ() << std::endl;
		std::cout << "        zz: " << getZz() << std::endl;
}

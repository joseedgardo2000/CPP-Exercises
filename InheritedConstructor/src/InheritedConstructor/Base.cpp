/*
 * Base.cpp
 *
 *  Created on: 24/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <InheritedConstructor/Base.h>

Base::Base() {
	std::cout << "Base Constructor 1" << std::endl;
	setX(0);
}

Base::Base(int x) {
	std::cout << "Base Constructor 2" << std::endl;
	setX(x);
}

void Base::display() {
	std::cout << "Base x: " << getX() << std::endl;
}

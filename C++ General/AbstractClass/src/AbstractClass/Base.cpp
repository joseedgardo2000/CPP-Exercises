/*
 * Base.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <AbstractClass/Base.h>

const std::string& Base::getName() const {
	return name;
}

void Base::setName(const std::string& name) {
	this->name = name;
}

Base::~Base() {
	std::cout << "----- [Destructor Base" << getName() << "] -----" << std::endl;
}



Base::Base(std::string name) {
	setName(name);
	std::cout << "[Constructor Base] ----->> " << getName() << std::endl;

}


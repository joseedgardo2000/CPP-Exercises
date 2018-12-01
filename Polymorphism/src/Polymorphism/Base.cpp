/*
 * Base.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <Polymorphism/Base.h>

int Base::getX() const {
	return x;
}

void Base::setX(int x) {
	this->x = x;
}

Base::Base(int a, std::string name) {
	std::cout << "---- CONSTRUCTOR Base ----" << std::endl;
	setX(a);
	setName(name);
}

const std::string& Base::getName() const {
	return name;
}

void Base::setName(const std::string& name) {
	this->name = name;
}

Base::~Base() {
	std::cout << "---- DESTRUCTOR Base ---- {" << getName() << "} ---------------" << std::endl;
}

void Base::display() {
	std::cout << "--------------- {" << getName() << "} ---------------" << std::endl;
	std::cout << "[Base] x: " << getX() << std::endl;
}

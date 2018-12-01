/*
 * ClaseA.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <StaticMembers/ClaseA.h>

int ClaseA::counter = 0;

const std::string& ClaseA::getName() const {
	return name;
}

void ClaseA::setName(const std::string& name) {
	this->name = name;
}

ClaseA::ClaseA(std::string name) {
	setName(name);
	counter++;
	std::cout << "Class name: " << name << std::endl;
	std::cout << "----Object Instance #: " << counter << std::endl;
}

void ClaseA::displayCounter() {
	std::cout << "----Object Instance #: " << counter << std::endl;
}



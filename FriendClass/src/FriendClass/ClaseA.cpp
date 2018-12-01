/*
 * ClaseA.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <FriendClass/ClaseA.h>

const std::string& ClaseA::getName() const {
	return name;
}

void ClaseA::setName(const std::string& name) {
	this->name = name;
}

ClaseA::ClaseA(std::string name) {
	setName(name);
	std::cout << "[ClaseA - Constructor] -------------- " << getName() << std::endl;

}

ClaseA::~ClaseA() {
	std::cout << "--------- [ClaseA - Destructor] -------------- " << getName() << std::endl;
}

void ClaseA::function01() {
	std::cout << "--------- [ClaseA - function01] -------------- " << getName() << std::endl;
}

void ClaseA::function00() {
	std::cout << "--------- [ClaseA - function00] -------------- " << getName() << std::endl;
}

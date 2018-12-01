/*
 * ClaseB.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <FriendClass/ClaseB.h>

ClaseB::ClaseB(std::string name) {
	b = new ClaseA("b = new ClaseA");
	setName(name);
	std::cout << "[ClaseB - Constructor] -------------- " << getName() << std::endl;

}

ClaseB::~ClaseB() {
	std::cout << "--------- [ClaseB - Destructor] -------------- " << getName() << std::endl;
}

const std::string& ClaseB::getName() const {
	return name;
}

void ClaseB::setName(const std::string& name) {
	this->name = name;
}

void ClaseB::function02() {
	b->function01();
	b->function00();
}

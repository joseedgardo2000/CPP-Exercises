/*
 * External.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <InnerClass/External.h>

int External::counter = 0;

const std::string& External::getName() const {
	return name;
}

void External::setName(const std::string& name) {
	this->name = name;
}

External::External(std::string name) {
	counter ++;
	setName(name);
}


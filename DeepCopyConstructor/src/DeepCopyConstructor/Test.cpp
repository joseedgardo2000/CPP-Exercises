/*
 * Test.cpp
 *
 *  Created on: 23/11/2018
 *      Author: Jose Edgardo
 */

#include "DeepCopyConstructor/Test.h"

Test::Test() {
	setNumber(10);
	setPointNumber(new int[getNumber()]);
	iniPointNumber();
}

Test::Test(Test& test) {
	setNumber(test.getNumber());
	setPointNumber(new int[test.getNumber()]);
	for(int i=0; i < getNumber();i++){
		getPointNumber()[i]=test.getPointNumber()[i];
	}
}

int Test::getNumber() const {
	return number;
}

void Test::setNumber(int number) {
	this->number = number;
}

int* Test::getPointNumber() const {
	return pointNumber;
}

void Test::iniPointNumber() {
	for(int i=0; i<getNumber(); i++)
	{
		getPointNumber()[i] = (i+1)*10;
	}
}

Test::~Test() {
	delete []getPointNumber();
}

void Test::setPointNumber(int* number) {
	pointNumber = number;
}

void Test::print() {
	std::cout << "number: " << getNumber() << std::endl;
	std::cout << "values: ";
	for(int i=0; i < getNumber(); i++)
	{
		std::cout << getPointNumber()[i] <<" ";
	}
	std::cout << std::endl;
}



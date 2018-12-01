/*
 * MyException.cpp
 *
 *  Created on: 26/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <ClassException/MyException.h>

MyException::MyException(int code, std::string name) {
	this->code = code;
	this->name =  name;
	errorS = new char[100];
}

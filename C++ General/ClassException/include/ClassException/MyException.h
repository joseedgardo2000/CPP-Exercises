/*
 * MyException.h
 *
 *  Created on: 26/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_CLASSEXCEPTION_MYEXCEPTION_H_
#define INCLUDE_CLASSEXCEPTION_MYEXCEPTION_H_

#include <exception>
#include <string>
#include <string.h>

class MyException: public std::exception {
	int code;
	std::string name;
	char* errorS;
public:
	MyException(int code, std::string name);
	char* what()
	{
		std::string errorStr = "Exception: " + name + " - Code: " + std::to_string(code);
		strcpy(errorS,errorStr.c_str());
		return errorS;
	}

	~MyException(){
		delete []errorS;
	}
};

#endif /* INCLUDE_CLASSEXCEPTION_MYEXCEPTION_H_ */

/*
 * Test.h
 *
 *  Created on: 23/11/2018
 *      Author: Jose Edgardo
 */

#ifndef HEADER_DEEPCOPYCONSTRUCTOR_TEST_H_
#define HEADER_DEEPCOPYCONSTRUCTOR_TEST_H_

#include <iostream>

class Test {
private:
	int number;
	int *pointNumber;
	void iniPointNumber();
public:
	Test();
	Test(Test& test);
    ~Test();
	void print();
	//-------- GETTERS/SETTERS --------//
	inline int getNumber() const;
	inline void setNumber(int number);
	inline int* getPointNumber() const;
	inline void setPointNumber(int* number);
	//---------------------------------//
};

#endif /* HEADER_DEEPCOPYCONSTRUCTOR_TEST_H_ */

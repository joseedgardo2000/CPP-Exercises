/*
 * ComplexNumber.h
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#ifndef INCLUDE_OPERATOROVERLOADING_COMPLEXNUMBER_H_
#define INCLUDE_OPERATOROVERLOADING_COMPLEXNUMBER_H_

#include <iostream>

class ComplexNumber {
private:
	float real;
	float imaginary;
public:
	ComplexNumber(float a=0.0f, float b=0.0f);
	ComplexNumber operator+(ComplexNumber number);
	// -------------- GETTERS/SETTERS --------------//
	float getImaginary() const;
	void setImaginary(float imaginary);
	float getReal() const;
	void setReal(float real);
	// -------------- --------------- --------------//
	void print();

};

#endif /* INCLUDE_OPERATOROVERLOADING_COMPLEXNUMBER_H_ */

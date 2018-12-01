/*
 * ComplexNumber.h
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#ifndef INCLUDE_INSERTIONOPERATOROVERLOADING_COMPLEXNUMBER_H_
#define INCLUDE_INSERTIONOPERATOROVERLOADING_COMPLEXNUMBER_H_

#include <iostream>
#include <ostream>

class ComplexNumber {
private:
	float real;
	float imaginary;
public:
	ComplexNumber(float a=0.0f, float b=0.0f);
	ComplexNumber operator+(ComplexNumber number);
	//friend std::ostream& operator<<(std::ostream& o, ComplexNumber &number);
	// -------------- GETTERS/SETTERS --------------//
	float getImaginary() const;
	void setImaginary(float imaginary);
	float getReal() const;
	void setReal(float real);
	// -------------- --------------- --------------//
	void print();

};

//Could be friend or could be like this

std::ostream& operator<<(std::ostream& o, ComplexNumber &number);

#endif /* INCLUDE_INSERTIONOPERATOROVERLOADING_COMPLEXNUMBER_H_ */

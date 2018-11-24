/*
 * ComplexNumber.cpp
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#include "InsertionOperatorOverloading/ComplexNumber.h"

ComplexNumber::ComplexNumber(float real, float imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}

void ComplexNumber::print() {
	std::cout << "[" << this << "] "<< real << " + " << imaginary << "i" <<std::endl;
}

ComplexNumber ComplexNumber::operator +(ComplexNumber number) {
	ComplexNumber res;
	res.setReal(real + number.getReal());
	res.setImaginary(imaginary + number.getImaginary());
	std::cout << "tmp [" << &res << "] " << std::endl;
	return res;
}

float ComplexNumber::getImaginary() const {
	return imaginary;
}

void ComplexNumber::setImaginary(float imaginary) {
	this->imaginary = imaginary;
}

float ComplexNumber::getReal() const {
	return real;
}

void ComplexNumber::setReal(float real) {
	this->real = real;
}

std::ostream& operator<<(std::ostream& o, ComplexNumber &number)
{
	//o << number.real << " + " << number.imaginary << "i" ;
	o << number.getReal() << " + " << number.getImaginary() << "i" ;
	return o;
}

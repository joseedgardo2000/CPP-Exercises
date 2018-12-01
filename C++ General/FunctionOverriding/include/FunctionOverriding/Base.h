/*
 * Base.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_FUNCTIONOVERRIDING_BASE_H_
#define INCLUDE_FUNCTIONOVERRIDING_BASE_H_

#include <iostream>

class Base {
private:
	int x;
public:
	//----- CONSTRUCTORS/DESTRUCTORS ---------//
	Base(int a = 0);
	//----- ACCESSORS/MUTATORS ---------------//
	int getX() const;
	void setX(int x);
	//----- FACILATORS -----------------------//
	void display();
};

#endif /* INCLUDE_FUNCTIONOVERRIDING_BASE_H_ */

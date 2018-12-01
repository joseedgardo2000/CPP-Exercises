/*
 * Derived.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_FUNCTIONOVERRIDING_DERIVED_H_
#define INCLUDE_FUNCTIONOVERRIDING_DERIVED_H_

#include <iostream>
#include <string>
#include <VirtualFunctions/Base.h>


class Derived: public Base {
private:
	int y;
public:
	//----- CONSTRUCTORS/DESTRUCTORS ---------//
	Derived(int a = 0, std::string name = "");
	//----- ACCESSORS/MUTATORS ---------------//
	int getY() const;
	void setY(int y);
	//----- FACILATORS -----------------------//
	void display();
};

#endif /* INCLUDE_FUNCTIONOVERRIDING_DERIVED_H_ */

/*
 * Derivated.h
 *
 *  Created on: 24/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_INHERITEDCONSTRUCTOR_DERIVATED_H_
#define INCLUDE_INHERITEDCONSTRUCTOR_DERIVATED_H_

#include <InheritedConstructor/Base.h>
#include <iostream>

class Derivated: public Base {
private:
	int y;
public:
	//------ CONSTRUCTORS -------------//
	Derivated();
	Derivated(int y);
	Derivated(int x, int y);
	//------ ACCESSORS/MUTATORS --------//
	int getY() const;
	void setY(int y);
	//------ FACILITATORS -------------//
	void display();
};


#endif /* INCLUDE_INHERITEDCONSTRUCTOR_DERIVATED_H_ */

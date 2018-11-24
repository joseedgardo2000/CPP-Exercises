/*
 * Base.h
 *
 *  Created on: 24/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#ifndef INCLUDE_VERYSIMPLEINHERITANCE_BASE_H_
#define INCLUDE_VERYSIMPLEINHERITANCE_BASE_H_

#include <iostream>

class Base {
protected:
	int x;
public:
	Base();
	// --------- GETTERS/SETTERS --------------- //
	int getX() const;
	void setX(int x);
	// --------- --------------- --------------- //
	void display();
};

#endif /* INCLUDE_VERYSIMPLEINHERITANCE_BASE_H_ */

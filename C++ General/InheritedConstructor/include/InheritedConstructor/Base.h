/*
 * Base.h
 *
 *  Created on: 24/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_INHERITEDCONSTRUCTOR_BASE_H_
#define INCLUDE_INHERITEDCONSTRUCTOR_BASE_H_

#include <iostream>

class Base {
private:
	int x;
public:
	Base();
	Base(int x);
	// -------------- ACCESSORS/MUTATORS ------------------ //
	inline int getX() const {
		return x;
	}

	inline void setX(int x) {
		this->x = x;
	}
	// ------------------ FACILITATORS -------------------- //
	void display();
};

#endif /* INCLUDE_INHERITEDCONSTRUCTOR_BASE_H_ */

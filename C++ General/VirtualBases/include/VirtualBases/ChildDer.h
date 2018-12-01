/*
 * ChildDer.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_VIRTUALBASES_CHILDDER_H_
#define INCLUDE_VIRTUALBASES_CHILDDER_H_

#include <iostream>
#include <string>
#include <VirtualBases/Base.h>

class ChildDer: virtual public Base {
	int y;
	std::string className;
public:
	// ----- CONSTRUCTORS/DESTRUCTORS - //
	ChildDer(int a = 0);
	// ----- ACCESSORS/MUTATORS ------- //
	const std::string& getClassName() const;
	void setClassName(const std::string& className);
	int getY() const;
	void setY(int y);
	// ----- FACILITATORS ------------- //
	void display();
};

#endif /* INCLUDE_VIRTUALBASES_CHILDDER_H_ */

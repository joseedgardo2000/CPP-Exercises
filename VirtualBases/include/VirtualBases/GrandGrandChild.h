/*
 * GrandGrandChild.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_VIRTUALBASES_GRANDGRANDCHILD_H_
#define INCLUDE_VIRTUALBASES_GRANDGRANDCHILD_H_

#include <iostream>
#include <string>
#include <VirtualBases/GrandChild.h>

class GrandGrandChild: public GrandChild {
private:
	int zz;
	std::string className;
public:
	// ----- CONSTRUCTORS/DESTRUCTORS - //
	GrandGrandChild(int a = 0);
	// ----- ACCESSORS/MUTATORS ------- //
	int getZz() const;
	void setZz(int zz);
	// ----- FACILITATORS ------------- //
	void display();
};

#endif /* INCLUDE_VIRTUALBASES_GRANDGRANDCHILD_H_ */

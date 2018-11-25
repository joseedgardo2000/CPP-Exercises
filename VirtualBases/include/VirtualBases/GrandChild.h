/*
 * GrandChild.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_VIRTUALBASES_GRANDCHILD_H_
#define INCLUDE_VIRTUALBASES_GRANDCHILD_H_

#include <iostream>
#include <string>
#include <VirtualBases/ChildDer.h>
#include <VirtualBases/ChildIzq.h>


/*
 *
 */
class GrandChild: public ChildDer,  public ChildIzq {
private:
	int z;
	std::string className;
public:
	// ----- CONSTRUCTORS/DESTRUCTORS - //
	GrandChild(int a = 0);
	// ----- ACCESSORS/MUTATORS ------- //
	int getZ() const;
	void setZ(int z);
	// ----- FACILITATORS ------------- //
	void display();
};

#endif /* INCLUDE_VIRTUALBASES_GRANDCHILD_H_ */

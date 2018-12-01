/*
 * Child.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_VIRTUALBASES_CHILDIZQIZQ_H_
#define INCLUDE_VIRTUALBASES_CHILDIZQIZQ_H_

#include <iostream>
#include <string>
#include <VirtualBases/Base.h>


class ChildIzq: virtual public Base {
private:
	int x;
	std::string className;
public:
	// ----- CONSTRUCTORS/DESTRUCTORS - //
	ChildIzq(int a = 0);
	// ----- ACCESSORS/MUTATORS ------- //
	const std::string& getClassName() const;
	void setClassName(const std::string& className);
	int getX() const;
	void setX(int x);
	// ----- FACILITATORS ------------- //
	void display();
};

#endif /* INCLUDE_VIRTUALBASES_CHILDIZQIZQ_H_ */

/*
 * Base.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_VIRTUALBASES_BASE_H_
#define INCLUDE_VIRTUALBASES_BASE_H_

#include <iostream>
#include <string>

class Base {
	int t;
	std::string className;
public:
	// ----- CONSTRUCTORS/DESTRUCTORS - //
	Base(int a=1);
	// ----- ACCESSORS/MUTATORS ------- //
	const std::string& getClassName() const;
	void setClassName(const std::string& className);
	int getT() const;
	void setT(int t);
	// ----- FACILITATORS ------------- //
	void display();
};

#endif /* INCLUDE_VIRTUALBASES_BASE_H_ */

/*
 * Derived.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_ABSTRACTCLASS_DERIVED_H_
#define INCLUDE_ABSTRACTCLASS_DERIVED_H_

#include <iostream>
#include <string>
#include <AbstractClass/Base.h>


class Derived: public Base {
public:
	Derived(std::string name);
	~Derived();
	void function01();
};

#endif /* INCLUDE_ABSTRACTCLASS_DERIVED_H_ */

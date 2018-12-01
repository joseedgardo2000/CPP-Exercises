/*
 * ClassB.h
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_DESTRUCTORORDER_CLASSB_H_
#define INCLUDE_DESTRUCTORORDER_CLASSB_H_

#include <iostream>

#include "DestructorOrder/ClassA.h"

class ClassB:public ClassA
{
public:
	ClassB()
	{
		std::cout << "ClassB Constructor" << std::endl;
	}
	~ClassB()
	{
		std::cout << "ClassB Destructor" << std::endl;
	}
};



#endif /* INCLUDE_DESTRUCTORORDER_CLASSB_H_ */

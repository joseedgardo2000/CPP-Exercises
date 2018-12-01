/*
 * ClassC.h
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_DESTRUCTORORDER_CLASSC_H_
#define INCLUDE_DESTRUCTORORDER_CLASSC_H_

#include <iostream>

#include "DestructorOrder/ClassB.h"

class ClassC:public ClassB
{
public:
	ClassC()
	{
		std::cout << "ClassC Constructor" << std::endl;
	}
	~ClassC()
	{
		std::cout << "ClassC Destructor" << std::endl;
	}
};




#endif /* INCLUDE_DESTRUCTORORDER_CLASSC_H_ */

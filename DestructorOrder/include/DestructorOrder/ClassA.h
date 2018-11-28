/*
 * ClassA.h
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_DESTRUCTORORDER_CLASSA_H_
#define INCLUDE_DESTRUCTORORDER_CLASSA_H_

#include <iostream>

class ClassA
{
public:
	ClassA()
	{
		std::cout << "ClassA Constructor" << std::endl;
	}
	~ClassA()
	{
		std::cout << "ClassA Destructor" << std::endl;
	}
};



#endif /* INCLUDE_DESTRUCTORORDER_CLASSA_H_ */

/*
 * main.cpp
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include "DestructorOrder/ClassC.h"


int main()
{
	std::cout << ">>>> Destructor Order <<<<" << std::endl;
	ClassC c;
	return 0;
}

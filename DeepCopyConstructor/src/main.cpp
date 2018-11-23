/*
 * main.cpp
 *
 *  Created on: 23/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include "DeepCopyConstructor/Test.h"

int main()
{
	Test test1;
	Test test2(test1);
	std::cout << ">>>> DeepCopyConstructor  <<<<" << std::endl;
	test1.print();
	test2.print();
}




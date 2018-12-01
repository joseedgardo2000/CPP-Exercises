/*
 * main.cpp
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include "NameSpace/NameSpaceAlfa01.h"
#include "NameSpace/NameSpaceAlfa02.h"
#include "NameSpace/NameSpaceBeta01.h"

int main()
{
	std::cout << ">>>> NameSpace <<<<" << std::endl;

	alfa::function01();
	alfa::function02();
	beta::function01();

	return 0;
}


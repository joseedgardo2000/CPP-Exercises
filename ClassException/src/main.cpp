/*
 * main.cpp
 *
 *  Created on: 26/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include "ClassException/MyException.h"

float division(float a, float b)
{
	if(b==0) throw MyException(101,"Division By 0");

	return a/b;

}

int main()
{
	float res;
	try{

		res = division(15,3);
		std::cout << "Result: " << res << std::endl;
		res = division(15,0);
		std::cout << "Result: " << res << std::endl;
	} catch (MyException& e) {
		std::cout << "e: "<< e.what() << std::endl;
	}
	return 0;
}


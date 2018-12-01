/*
 * main.cpp
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include "FriendClass/ClaseA.h"
#include "FriendClass/ClaseB.h"

int main()
{
	std::cout << ">>>> Friend Class <<<<" << std::endl;

	ClaseA a("ClaseA a");
	a.function01();

	ClaseB b("ClaseB b");
	b.function02();

	return 0;
}

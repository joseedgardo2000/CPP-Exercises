/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

void staticVar()
{
	int localVar = 0;
	static int staticCounter = 0;

	localVar ++;
	staticCounter ++;

	std::cout << "localVar: " << localVar << " staticCounter: " << staticCounter << std::endl;
}


int main()
{
	for(int i = 1; i <=10; i++)
	{
		staticVar();
	}
	return 0;
}




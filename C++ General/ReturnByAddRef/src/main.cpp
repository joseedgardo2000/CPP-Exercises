/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int* returnValueAdd01(int a)
{
	int* res = new int;
	*res = 5 * a;
	return res;
}

int* returnValueAdd02(int** a)
{
	int* res = new int;
	*res = 5;
	*a = res;
	return res;
}



int& returnValueRef02(int& aa){
	aa = 100;
	return aa;
}

int main()
{
	int *x;
	int *y;
	int *z;
	int *zz;
	int ss;

	x=returnValueAdd01(6);
	std::cout << "*x: " << *x << std::endl;

	z=returnValueAdd02(&y);
	std::cout << "*z: " << *z << std::endl;

	*returnValueAdd02(&zz) = 20;

	std::cout << "*zz: " << *zz << std::endl;



	ss = returnValueRef02(ss);
	std::cout << "ss: " << ss << std::endl;

	delete zz;
	delete z;
	delete x;
}

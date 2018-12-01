/*
 * main.cpp
 *
 *  Created on: 19/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

void function01()
{
	std::cout << "Inside function01" << std::endl;
}

int function02()
{
	return 5;
}

float function03(float a, float b){
	float  res;
	if(b==0) res = 0.0f;
	else res = (a/b);
	return res;
}

int main()
{
	void  (*funPtr01)();
	int   (*funPtr02)();
	float (*funPtr03)(float,float);

	funPtr01 = function01;
	funPtr02 = function02;
	funPtr03 = function03;

	(*funPtr01)();

	std::cout << "Value of function02: " << (*funPtr02)() << std::endl;
	std::cout << "Value of function03: " << (*funPtr03)(10,3) << std::endl;
}



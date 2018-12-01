/*
 * main.cpp
 *
 *  Created on: 26/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>

float divide(float a, float b);

int main()
{
	float res;
	try	{
		res = divide(15,3);
		std::cout << "Resultado: " << res << std::endl;
		res = divide(15,0);
		std::cout << "Resultado: " << res << std::endl;

	} catch (int e){
		std::cout << "Division by 0: Error code: " << e << std::endl;
	}
}

float divide(float a, float b)
{
	if(b==0) throw(105);

	return a/b;
}


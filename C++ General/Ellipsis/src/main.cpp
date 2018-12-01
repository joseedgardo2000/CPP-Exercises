/*
 * main.cpp
 *
 *  Created on: 29/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <stdarg.h>

int sum(int number, ...);

int main()
{
	std::cout << ">>>> Ellipsis <<<<" << std::endl;

	std::cout << "Sum: " << sum(5, 1,2,3,4,5) << std::endl;

}

int sum(int number, ...)
{
	int val;
	int sum=0;
	va_list list;
	va_start(list, number);
	for(int i=0; i<number; i++)
	{
		val = va_arg(list, int);
		sum += val;
	}
	return sum;
}

/*
 * main.cpp
 *
 *  Created on: 18/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */
#include <iostream>

int main()
{
	int a[10] = {4,21, 78, 98,34, 7, 10,32, 77, 90};
	int accSum = 0;

	std::cout <<"Sum the next numbers: " << std::endl << std::endl;
	for(int i:a)
	{
		std::cout << "\t["<< i << "]";
		accSum += i;
	}

	std::cout << std::endl << std::endl;

	std::cout << "Result: " << accSum << std::endl;

	return 0;
}




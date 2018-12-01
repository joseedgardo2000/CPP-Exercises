/*
 * main.cpp
 *
 *  Created on: 18/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int intArray[10] = {4,21, 78, 98,34, 7, 10,32, 77, 90};
	int max = INT_MIN;

	std::cout << "The bigger element of the next numbers: " << std::endl << std::endl;

	for(auto elem:intArray){
		std::cout << "\t[" << elem << "]";
		if(elem > max) max = elem;
	}

	std::cout << std::endl << "is: " << max << std::endl;
	return 0;
}




/*
 * main.cpp
 *
 *  Created on: 09/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int numYear;
	bool isLeap = false;
	std::cout << "Introduce a year: " << std::endl;
	std::cin >> numYear;
	if(numYear%100 == 0)
	{
		if(numYear%400 == 0)
		{
			isLeap = true;
		}
	}
	else if(numYear%4 == 0)
	{
		isLeap = true;
	}

	if(isLeap)
	{
		std::cout << "The year " << numYear << " is Leap" << std::endl;
	}
	else
	{
		std::cout << "The year " << numYear << " is No Leap" << std::endl;
	}
	return 0;
}




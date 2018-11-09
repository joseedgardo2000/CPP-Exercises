/*
 * main.cpp
 *
 *  Created on: 08/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include <string>

int main()
{
	int numDay;
	std::string nameDay;

	std::cout << "Introduce the day number: " << std::endl;
	std::cin >> numDay;

	switch(numDay)
	{
		case 1:
			nameDay = "Monday";
			break;
		case 2:
			nameDay = "Tuesday";
			break;
		case 3:
			nameDay = "Wednesday";
			break;
		case 4:
			nameDay = "Thursday";
			break;
		case 5:
			nameDay = "Friday";
			break;
		case 6:
			nameDay = "saturday";
			break;
		case 7:
			nameDay = "Sunday";
			break;
		default:
			nameDay = "No Day";
			break;
	}

	std::cout << "Selected day: " << nameDay << std::endl;

}



/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int num1, num2, div1, div2;

	std::cout << "Enter 2 numbers separated by space: ";
	std::cin >> num1 >> num2;

	div1 = num1;
	div2 = num2;

	while(div1!=div2)
	{
		if(div1 > div2){
			div1 -= div2;
		}
		else if (div2 > div1)
		{
			div2 -= div1;
		}
	}

	std::cout << "GCD of "<<num1 <<" and " << num2 <<" is: " << div1;
}



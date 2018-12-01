/*
 * main.cpp
 *
 *  Created on: 10/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main(){
	int number;
	long long factorial=1L;
	std::cout << "Enter the number to get its factorial: ";
	std::cin >> number;
	for(int i=1; i<=number; i++){
		factorial*=i;
	}
	std::cout << "The factorial of " << number << " is " << factorial << std::endl;
	return 0;
}




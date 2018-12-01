/*
 * main.cpp
 *
 *  Created on: 06/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

int main(){
	char a;
	int b;
	long c;
	long long d;
	float e;
	double f;
	long double g;

	std::cout << "char type size is: " << sizeof(a) << std::endl;
	std::cout << "int type size is: " << sizeof(b) << std::endl;
	std::cout << "long type size is: " << sizeof(c) << std::endl;
	std::cout << "long long type size is: " << sizeof(d) << std::endl;
	std::cout << "float type size is: " << sizeof(e) << std::endl;
	std::cout << "double type size is: " << sizeof(f) << std::endl;
	std::cout << "long double type size is: " << sizeof(g) << std::endl;

	std::cout << "Min value to char: " << CHAR_MIN << " :: Max value to char:" << CHAR_MAX << std::endl;
	std::cout << "Min value to int: " << INT_MIN << " :: Max value to int:" << INT_MAX << std::endl;
	std::cout << "Min value to long: " << LONG_MIN << " :: Max value to long:" << LONG_MAX << std::endl;
	std::cout << "Min value to long: " << LONG_LONG_MIN << " :: Max value to long:" << LONG_LONG_MAX << std::endl;

	return 0;
}



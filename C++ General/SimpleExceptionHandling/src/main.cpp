/*
 * main.cpp
 *
 *  Created on: 26/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>

int main()
{
	int a=4, b=0, c=0;
	try{
		std::cout << "División " << std::endl;
		if(b==0) throw 101;
		c= a/b;
		std::cout << "Resultado: " << c << std::endl;
	} catch (int e) {
		std::cout << "Codigo de error: " << e << std::endl;
	}

	try{
		std::cout << "División2 " << std::endl;
		if(b==0) throw 101;
		c= a/b;
		std::cout << "Resultado2: " << c << std::endl;
	} catch (...) {
		std::cout << "error2: " <<  std::endl;
	}

	try{
		std::cout << "División3 " << std::endl;
		c= a/b;
		std::cout << "Resultado3: " << c << std::endl;
	} catch (...) {
		std::cout << "error3: " <<  std::endl;
	}
	return 0;
}



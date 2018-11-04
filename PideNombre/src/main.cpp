/*
 * main.cpp
 *
 *  Created on: 01/11/2018
 *  Author: Jose Edgardo
 */

#include <iostream>

int main()
{
	std::string nombre;
	std::cout << "Proporciona tu nombre: " << std::endl;
	std::getline(std::cin, nombre);
	std::cout << "Hola, Bienvenido " << nombre;
	return 0;
}



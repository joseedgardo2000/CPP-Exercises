/*
 * main.cpp
 *
 *  Created on: 18/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include <iomanip>
#include <typeinfo>

int main()
{
	int a1[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int a2[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			std::cout  << "\t" << "["<< std::setfill('0') << std::setw(2)<< a1[i][j] << "]";
		}
		std::cout << std::endl;
	}

	std::cout << "\t-----------------------" << std::endl;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			std::cout << "\t" << "["<< std::setfill('0') << std::setw(2) << a2[i][j] << "]";
		}
		std::cout << std::endl;
	}

	std::cout << "\t-----------------------" << std::endl;

	for(auto& x: a2){
		std::cout << "\t" << typeid(x).name() << " { ";
		for(auto y:x){
			std::cout << typeid(y).name() << " ";
		}
		std::cout << "}" << std::endl;
	}


	std::cout << "\t-----------------------" << std::endl;

	for(auto& x: a1){
		for(auto y:x){
			std::cout << "\t" << "["<< std::setfill('0') << std::setw(2) << y << "]";
		}
		std::cout << std::endl;
	}

	std::cout << "\t-----------------------" << std::endl;

	return 0;
}

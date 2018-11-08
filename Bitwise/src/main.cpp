/*
 * main.cpp
 *
 *  Created on: 08/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>
#include <bitset>

int main()
{
	short int a=5, b=6, c = 077;

	std::cout << "    a --> " << std::bitset<8>(a)<<std::endl;
	std::cout << "    b --> " << std::bitset<8>(b)<<std::endl;
	std::cout << "---------------------- " << std::endl;
	std::cout << "a | b --> " << std::bitset<8>(a|b)<<std::endl;
	std::cout << "a & b --> " << std::bitset<8>(a&b)<<std::endl;
	std::cout << "a ^ b --> " << std::bitset<8>(a^b)<<std::endl;
	std::cout << "---------------------- " << std::endl;
	std::cout << "    a --> " << std::bitset<8>(a)<<std::endl;
	std::cout << "    b --> " << std::bitset<8>(b)<<std::endl;
	std::cout << "    c --> " << std::bitset<8>(c)<<std::endl;
	std::cout << "a >> 2--> " << std::bitset<8>(a>>2)<<std::endl;
	std::cout << "b >> 2--> " << std::bitset<8>(b>>2)<<std::endl;
	std::cout << "c >> 2--> " << std::bitset<8>(c>>2)<<std::endl;
	std::cout << "a << 2--> " << std::bitset<8>(a<<2)<<std::endl;
	std::cout << "b << 2--> " << std::bitset<8>(b<<2)<<std::endl;
	std::cout << "c << 2--> " << std::bitset<8>(c<<2)<<std::endl;

	std::cout << "---------------------- " << std::endl;
	std::cout << "    a --> " << std::bitset<8>(a)<<std::endl;
	std::cout << "    b --> " << std::bitset<8>(b)<<std::endl;
	std::cout << "    c --> " << std::bitset<8>(c)<<std::endl;
	std::cout << "   ~a --> " << std::bitset<8>(~a)<<std::endl;
	std::cout << "   ~b --> " << std::bitset<8>(~b)<<std::endl;
	std::cout << "   ~c --> " << std::bitset<8>(~c)<<std::endl;

}



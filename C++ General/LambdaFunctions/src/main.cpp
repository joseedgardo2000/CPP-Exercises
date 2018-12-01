/*
 * main.cpp
 *
 *  Created on: 28/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>

template <class T>
void fun(T p)
{
	p();
}

int main()
{
	std::cout << ">>>> Lambda Functions <<<<" << std::endl << std::endl;

	[](){std::cout << "Hello World Lambda!!!!!!" << std::endl << std::endl;}();

	[](int a, std::string s){std::cout << s << 5 * 5 << std::endl << std::endl;}(5, "The result of 5 * 5: ");

	int sum = [](int a, int b) -> int {return (a + b);}(6,8);

	std::cout << "Result of Suma of 6 + 8 is " << sum << std::endl << std::endl;

	int a=10;
	auto f = [&a](){std::cout << "Values of a: " << a << std::endl << std::endl; };

	f();
	a+=20;
	f();
	a+=30;
	fun(f);


	return 0;
}

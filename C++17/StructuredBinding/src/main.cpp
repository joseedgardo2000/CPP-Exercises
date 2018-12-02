#include <iostream>
#include <tuple>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::cout << std::endl << ">>>> Structured Binding <<<<" << std::endl << std::endl;
	
	std::tuple<std::string, int> number("uno", 1);
	auto [name, digit] = number;
	
	std::cout << "name: " << name << " digit: " << digit << std::endl;
	
	return 0;
}
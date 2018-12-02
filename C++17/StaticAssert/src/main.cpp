#include <iostream>
#include <type_traits>
#include <Windows.h>


int main()
{
	SetConsoleOutputCP( CP_UTF8 );
	std::cout << std::endl << ">>>> Static Assert <<<<" << std::endl << std::endl;
	
	const int a = 100;
	const int b = 101;

	static_assert (1 == 0, "Algo falló");
	static_assert (5 == 2);
	static_assert (a == b, "Assertion failed");

	return 0;
}
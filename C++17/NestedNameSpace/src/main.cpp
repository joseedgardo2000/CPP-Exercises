#include <iostream>

namespace org::ns01::ns02::ns03::ns04{
	int x;
}

int main()
{
	std::cout << std::endl << ">>>> Nested Space Name <<<<" << std::endl<< std::endl;
	
	org::ns01::ns02::ns03::ns04::x = 12345;
	
	std::cout << "The value of org::ns01::ns02::ns03::ns04::x is " << org::ns01::ns02::ns03::ns04::x << std::endl << std::endl;
	
	return 0;
}
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

void function01();

int main()
{
	std::cout << std::endl << ">>>> Multiset Test <<<<" << std::endl << std::endl;
	function01();
	return 0;
}

void function01()
{
	std::cout << std::endl << "----- function01 -----" << std::endl << std::endl;
	
	std::multiset<int> m = {10, 30, 20, 90, 70, 10};
	
	std::copy(m.begin(), m.end(), std::ostream_iterator<int>(std::cout, "\t") );
	std::cout << std::endl;
}
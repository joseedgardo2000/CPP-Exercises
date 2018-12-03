#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void traverseList();
void iterateList();

int main()
{
	std::cout << std::endl << ">>>> List Test <<<<" << std::endl << std::endl;
	traverseList();
	iterateList();
	return 0;
}

void iterateList()
{
	std::list <int> l = {100, 200, 3000, 400, 5000};
	
	std::cout << "Before sorting: " << std::endl;
	copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, "-->"));
	std::cout << "X" << std::endl;
	
	l.sort();
	
	std::cout << "After sorting: " << std::endl;
	copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, "-->"));
	std::cout << "X" << std::endl;
}

void traverseList()
{
	std::list<int> l;
	
	for(int i = 0; i < 5; i++)
	{
		l.push_back((i+1) * 100);
	}
	
	auto pos = l.begin();
	while(pos != l.end())
	{
		std::cout << "value: " << *pos++ << std::endl;
	}
}
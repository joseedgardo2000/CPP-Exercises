#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>

void basicDeque();

int main()
{
	std::cout << std::endl << ">>>> Deque Test <<<<" << std::endl << std::endl;
	
	basicDeque();
	
	return 0;
}

void basicDeque()
{
	std::deque<int> a = {10,20,30,40,50};
	std::cout << std::endl << "------ basicDeque ------" << std::endl;
	
	copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, "\t")); 
	std::cout << std::endl << "Size: " << a.size() << std::endl;
	
	a.push_back(60);
	a.push_back(0);
	
	copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, "\t"));
	std::cout << std::endl << "Size: " << a.size() << std::endl;
	
	a.clear();
	
	std::cout << std::endl << "Size after cleaning: " << a.size() << std::endl;
	
}
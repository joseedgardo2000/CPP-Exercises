#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void recorreVector();
void captureVector();


int main()
{
	std::cout << std::endl << ">>>> Vector Test <<<<" << std::endl << std::endl;
	
	recorreVector();
	captureVector();
	
	return 0;
}

void captureVector()
{
	std::vector<int> a;
	
	
	std::cout << "Introduce some numbers (\"\" to stop): " << std::endl;
	std::istream_iterator<int> start_input(std::cin);
	std::istream_iterator<int> end_input;
	copy(start_input, end_input, back_inserter(a));
	
	std::cout << "Vector content: " << std::endl;
	copy(a.begin(), a.end(), std::ostream_iterator<int>(std::cout, "\t"));
	std::cout << std::endl;
}

void recorreVector()
{
	std::vector<int> a = {2,5,4,1,3};
	
	std::cout << std::endl << "Size of vector is: " << a.size() << std::endl;
	
	auto pos = a.begin();
	
	std::cout << std::endl << "Vector before ordering: " << std::endl;
	
	while(pos != a.end())
	{
		std::cout << "value: " << *pos++ << std::endl;
	}
	
	std::sort(a.begin(), a.end());
	
	pos = a.begin();
	
	std::cout << std::endl << "Vector after ordering: " << std::endl;
	
	while(pos != a.end())
	{
		std::cout << "value: " << *pos++ << std::endl;
	}
	
}
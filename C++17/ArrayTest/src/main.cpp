#include <iostream>
#include <array>

void forTraversing(std::array<int, 5> &a);
void whileTraversing(std::array<int, 5> &a);
void reverseWhileTraversing(std::array<int, 5> &a);

int main()
{
	std::cout << std::endl << ">>>> Array Test <<<<" << std::endl << std::endl;
	std::array <int,5> a = {1,2,3,4,5}; 
	
	std::cout << "Number of elements: " << a.size() << std::endl;
	
	forTraversing(a);
	whileTraversing(a);
	reverseWhileTraversing(a);
	
	return 0;
}

void reverseWhileTraversing(std::array<int, 5> &a)
{
	std::cout << "------ reverseWhileTraversing -----" << std::endl;
	
	auto rpos = a.rbegin();
	
	while(rpos != a.rend())
	{
		std::cout << "value: " << *rpos++ << std::endl; 
	}
}

void whileTraversing(std::array<int, 5> &a)
{
	std::cout << "------ whileTraversing -----" << std::endl;
	
	auto pos = a.begin();
	
	while(pos != a.end())
	{
		std::cout << "value: " << *pos++ << std::endl; 
	}
}

void forTraversing(std::array<int, 5> &a){
	std::cout << "------ forTraversing -----" << std::endl;
	for(int i = 0; i < a.size(); i++ )
	{
		std::cout << "value: " << a[i] << std::endl; 
	}
}
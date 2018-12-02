#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

template <class T>
class Display 
{
	public:
		void operator() (const T& element)
		{
			std::cout << element << "\t";
		}
};

int main()
{
	std::cout << std::endl << ">>>> Functor <<<<" << std::endl << std::endl;
	
	std::vector<int> a = {11, 12, 13, 14, 15};
	
	for(int b:a)
	{
		std::cout << "value: " << b << std::endl; 
	}
	
	for_each(a.begin(), a.end(), Display<int>());
	
	return 0;
}
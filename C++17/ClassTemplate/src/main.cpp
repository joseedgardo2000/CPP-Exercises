#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>

template <typename T, int size>
class ClassTemplate{
	public:
		ClassTemplate(){}
		~ClassTemplate() {}
		
		void sort(std::array<T, size> &data)
		{
			for(int i=0; i< size; i++)
			{
				for(int j=0; j< size; j++)
				{
					if(data[i] < data[j])
					{
						std::swap(data[i], data[j]);
					}
				}
			}
		}
};

int main()
{
	std::cout << std::endl << ">>>> Class Template <<<<" << std::endl << std::endl;
	
	ClassTemplate <int, 6> aa;
	
	std::array <int,6> a = {100, 10, 40, 20, 60, 80};
	std::copy(a.begin(),a.end(), std::ostream_iterator<int>(std::cout, "\t")); 
	std::cout << std::endl;
	aa.sort(a);
	std::copy(a.begin(),a.end(), std::ostream_iterator<int>(std::cout, "\t"));
	std::cout << std::endl << std::endl;
	
	ClassTemplate <float, 6> bb;
	std::array <float,6> b = {100.65f, 10.0f, 40.99f, 20.45f, 60.23f, 80.6f};
	std::copy(b.begin(),b.end(), std::ostream_iterator<float>(std::cout, "\t")); 
	std::cout << std::endl;
	bb.sort(b);
	std::copy(b.begin(),b.end(), std::ostream_iterator<float>(std::cout, "\t"));
	std::cout << std::endl << std::endl;
	
	return 0;
}
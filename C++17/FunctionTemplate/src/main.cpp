#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T, int size>
void sort01(T input[]){
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(input[i] < input[j])
			{
				std::swap(input[i], input[j]);
			}
		}
	}
}



int main()
{
	int a[10] = {100, 10, 40, 20, 60, 80, 5, 50, 30, 25};
	std::cout << std::endl << ">>>> Function Template <<<<" << std::endl; 
	std::copy(a,a+10, std::ostream_iterator<int>(std::cout, "\t")); 
	std::cout << std::endl;
	
	::sort01<int, 10>(a);
	std::copy(a,a+10, std::ostream_iterator<int>(std::cout, "\t"));
	
	std::cout << std::endl << std::endl;
	
	
	double b[7] = {100.65, 10.0, 40.99, 20.45, 60.23, 80.6, 5.4};
	std::copy(b,b+7, std::ostream_iterator<double>(std::cout, "\t")); 
	std::cout << std::endl;
	
	::sort01<double, 7>(b);
	std::copy(b,b+7, std::ostream_iterator<double>(std::cout, "\t"));
	
	std::cout << std::endl << std::endl;
	
	std::string c[6] = {"Pedro", "Ana", "Roberto", "Luis", "Eduardo", "Carlos"};
	std::copy(c,c+6, std::ostream_iterator<std::string>(std::cout, "\t")); 
	std::cout << std::endl;
	
	::sort01<std::string, 6>(c);
	std::copy(c,c+6, std::ostream_iterator<std::string>(std::cout, "\t"));
}



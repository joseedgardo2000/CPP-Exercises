#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>

void sort01(std::array<int, 6> data)
{
	std::cout << "Non-Template sort function" << std::endl;
	int size = data.size();
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(data[i] < data[j])
			{
				std::swap(data[i], data[j]);
			}
		}
	}
}

template <typename T, int size>
void sort01(std::array<T, size> data){
	std::cout << "Template sort function" << std::endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(data[i] < data[j])
			{
				std::swap(data[i], data[j]);
			}
		}
	}
}

template <typename T>
void sort01(T data[], int size){
	std::cout << "Template sort function - 2 arguments" << std::endl;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(data[i] < data[j])
			{
				std::swap(data[i], data[j]);
			}
		}
	}
}

int main()
{
	
	std::cout << std::endl << ">>>> Function Template Overloaded <<<<" << std::endl; 
	
	std::array <int,6> a = {100, 10, 40, 20, 60, 80};
	std::copy(a.begin(),a.end(), std::ostream_iterator<int>(std::cout, "\t")); 
	std::cout << std::endl;
	::sort01(a);
	std::copy(a.begin(),a.end(), std::ostream_iterator<int>(std::cout, "\t"));
	std::cout << std::endl << std::endl;
	
	
    std::array <float,6> b = {100.65f, 10.0f, 40.99f, 20.45f, 60.23f, 80.6f};
	std::copy(b.begin(),b.end(), std::ostream_iterator<float>(std::cout, "\t")); 
	std::cout << std::endl;
	::sort01<float, 6>(b);
	std::copy(b.begin(),b.end(), std::ostream_iterator<float>(std::cout, "\t"));
	std::cout << std::endl << std::endl;
	
	std::string c[6] = {"Pedro", "Ana", "Roberto", "Luis", "Eduardo", "Carlos"};
	std::copy(c,c+6, std::ostream_iterator<std::string>(std::cout, "\t")); 
	std::cout << std::endl;
	::sort01<std::string>(c,6);
	std::copy(c,c+6, std::ostream_iterator<std::string>(std::cout, "\t"));
}



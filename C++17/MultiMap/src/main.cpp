#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <algorithm>

void function01();

int main()
{
	std::cout << std::endl << ">>>> MultiMap Test <<<<" << std::endl << std::endl;
	function01();
	return 0;
}

void function01()
{
	std::multimap<std::string, long> directory = {
		{"Pedro", 123456},
		{"Maria", 453569},
		{"Marta", 567564},
		{"Pedro", 112234},
		{"Lina",  890987}	
	};
	
	std::multimap<std::string, long>::iterator pos = directory.begin();
	
	while(pos != directory.end())
	{
		std::cout << "Key: " << pos->first << " --> Value: " << pos->second << std::endl;
		pos++;
	}
	
	std::multimap<std::string, long>::iterator actual = directory.find("Pedro");
	int count = directory.count("Pedro");
	int index = 0;
	
	std::cout << " ----------------- " << std::endl;
	
	while(actual!=directory.end())
	{
		std::cout << "Key: " << actual->first << " --> Value: " << actual->second << std::endl;
		index++;
		actual++;
		if(index==count){
			break;
		}
	}
}
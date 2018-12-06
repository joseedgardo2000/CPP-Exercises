#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>

void function01();

int main()
{
	std::cout << std::endl << ">>>> Map Test <<<<" << std::endl << std::endl;
	
	function01();
		
	return 0;
}

void function01()
{
	std::map<std::string, long> directory;
	
	directory["Marta"] = 1234567;
	directory["Filomena"] = 5234562;
	directory["Luis"] = 6238567;
	directory["Reynaldo"] = 9934567;
	directory["Bartolo"] = 9956267;
	directory["Amanda"] = 7734568;
	directory["Amanda"] = 1734560;


	std::map<std::string, long>::iterator it = directory.begin();
	
	while(it != directory.end())
	{
		std::cout << "Key: " << it->first << " --> Value: " << it->second << std::endl;
		it++;
	}
	
	std::map<std::string, long>::iterator pos = directory.find("Luis");
	//std::map<std::string, long>::iterator pos = directory.find("Romualdo");
	
	if(pos != directory.end())
		std::cout << std::endl<< "Key: " << pos->first << " --> Value: " << pos->second << std::endl;
	else
		std::cout << std::endl << "Contact not found" << std::endl;
	
}
/*
 * main.cpp
 *
 *  Created on: 28/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <vector>
#include <map>


void vectorDemo();
void mapDemo();

int main()
{
	std::cout << ">>>> Some STL <<<<" << std::endl;
	vectorDemo();
	mapDemo();
	return 0;
}

void mapDemo()
{
	std::cout << "--------- Map Demo ----------" << std::endl << std::endl;

	std::map<int, std::string> m;
	m.insert(std::pair<int, std::string>(1,"María"));
	m.insert(std::pair<int, std::string>(2,"Pedro"));
	m.insert(std::pair<int, std::string>(3,"Eduardo"));
	m.insert(std::pair<int, std::string>(4,"Rocio"));
	m.insert(std::pair<int, std::string>(5,"Raúl"));

	for(std::pair<int,std::string> elem:m)
	{
		std::cout << "Key: " << elem.first << " Value: " << elem.second << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Key: " << m.find(3)->first << " Value: " << m.find(3)->second << std::endl << std::endl;

	for(std::map<int,std::string>::reverse_iterator iter = m.rbegin(); iter!= m.rend(); iter++)
	{
		std::cout << "Key: " << iter->first << " Value: " << iter->second << std::endl;
	}

	std::cout << std::endl;

	for(auto iter = m.rbegin(); iter!= m.rend(); iter++)
	{
		std::cout << "Key: " << iter->first << " Value: " << iter->second << std::endl;
	}
}

void vectorDemo()
{
	std::vector<int> v = {1,2,3,4,5};

	std::cout << std::endl;

	std::cout << "--------- Vector Demo ----------" << std::endl << std::endl;

	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);

	for(int elem:v){
		std::cout << "elem: " << elem << std::endl;
	}

	std::cout << std::endl << std::endl;

	v.pop_back();
	v.pop_back();
	v.pop_back();

	for(int elem:v){
		std::cout << "elem: " << elem << std::endl;
	}

	std::cout << std::endl << std::endl;

	for(auto e = v.rbegin(); e != v.rend(); e++)
	{
		std::cout << "elem: " << *e << std::endl;
	}

}


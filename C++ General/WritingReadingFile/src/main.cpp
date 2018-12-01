/*
 * main.cpp
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#include <iostream>
#include <fstream>
#include <ios>


void writeFile()
{
	std::ofstream of;

	try{
		of.open("textFile.txt");

		if(!of.is_open())
		{
			std::cout << "--- File could'n be opened for writing ---" << std::endl;
			return;
		}

		std::cout << "--- File Opened for Writing ---" << std::endl;

		of << "Mario" << std::endl;
		of << 25 << std::endl;
		of << "Cd. Juárez" << std::endl;
		of.close();

		std::cout << "Mario" << std::endl;
		std::cout << 25 << std::endl;
		std::cout << "Cd. Juárez" << std::endl;
		std::cout << "--- WROTE ---" << std::endl;
	} catch (std::ios_base::failure& e)
	{
		std::cout << ">--- File could'n be opened for writing ---<" << std::endl;
		std::cout << e.what() << std::endl;

	}

}

void readFile()
{
	std::string name;
	int edad;
	std::string ciudad;

	std::ifstream ifs;
	ifs.open("textFile.txt");

	if(!ifs.is_open())
	{
		std::cout << "--- File could'n be opened for reading ---" << std::endl;
		return;
	}

	std::cout << "--- File Opened for Reading ---" << std::endl;

	ifs >> name;
	ifs >> edad;
	ifs >> ciudad;

	std::cout << name <<std::endl;
	std::cout << edad <<std::endl;
	std::cout << ciudad <<std::endl;

	std::cout << "--- READ ---" << std::endl;

}

int main()
{
	std::cout << ">>>> Wrinting Reading File <<<<" << std::endl;

	std::cout  << std::endl << std::endl;
	writeFile();

	std::cout  << std::endl << std::endl;
	readFile();

	return 0;
}



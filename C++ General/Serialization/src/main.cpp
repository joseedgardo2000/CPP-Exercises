/*
 * main.cpp
 *
 *  Created on: 28/11/2018
 *      Author: Jos� Edgardo Morales Barroso
 */

#include <iostream>
#include <fstream>
#include "Serialization/Student.h"

int main()
{
	std::cout << ">>>> Serialization <<<<" << std::endl;

	Student s("Mar�a", 22, "Spain");
	Student t("Jos�", 34, "M�xico");

	s.display();
	t.display();

	std::ofstream ofs("student.txt");

	ofs << s;
	ofs << t;

	ofs.close();

	std::cout << "Serialization completed ---->>>>>>>>" << std::endl << std::endl << std::endl;

	Student u("", 0, "");
	Student v("", 0, "");

	std::ifstream ifs("student.txt");

	ifs >> u;
	ifs >> v;

	ifs.close();

	u.display();
	v.display();

	std::cout << "Deserialization completed ---->>>>>>>>" << std::endl;

	return 0;
}



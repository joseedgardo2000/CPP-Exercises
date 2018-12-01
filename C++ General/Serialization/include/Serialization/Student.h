/*
 * Student.h
 *
 *  Created on: 28/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_SERIALIZATION_STUDENT_H_
#define INCLUDE_SERIALIZATION_STUDENT_H_

#include <iostream>
#include <fstream>

class Student
{
private:
	std::string name;
	int age;
	std::string country;
public:


	Student(std::string name, int age, std::string country)
	{
		this->name = name;
		this->age = age;
		this->country = country;
	}
	void display()
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
		std::cout << "Country: " << country << std::endl << std::endl;
	}

	friend std::ofstream& operator<<(std::ofstream& ofs, Student& s);
	friend std::ifstream& operator>>(std::ifstream& ifs, Student& s);
};

std::ifstream& operator>>(std::ifstream& ifs, Student& s)
{
	ifs >> s.name >> s.age >> s.country;
	return ifs;
}

std::ofstream& operator<<(std::ofstream& ofs, Student& s)
{
	ofs << s.name << std::endl;
	ofs << s.age << std::endl;
	ofs << s.country << std::endl;

	return ofs;
}


#endif /* INCLUDE_SERIALIZATION_STUDENT_H_ */

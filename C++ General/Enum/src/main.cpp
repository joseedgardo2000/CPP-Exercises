/*
 * main.cpp
 *
 *  Created on: 08/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */

#include <iostream>

enum DayOfWeek {MON, TUE, WEN, THU, FRI, SAT, SUN};
enum DiaDeSem {LUN=100, MAR, MIE, JUE, VIE=200, SAB, DOM};

int main()
{
	DayOfWeek dayMon = MON;
	DayOfWeek dayFri = DayOfWeek::FRI;
	DayOfWeek dayWen = WEN;
	DiaDeSem diaMar = MAR;
	DiaDeSem diaDom = DiaDeSem::DOM;

	std::cout << "dayMon: " << dayMon << std::endl;
	std::cout << "dayFri: " << dayFri << std::endl;
	std::cout << "dayWen: " << dayWen << std::endl;
	std::cout << "diaMar: " << diaMar << std::endl;
	std::cout << "diaDom: " << diaDom << std::endl;
}



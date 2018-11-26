/*
 * ClaseA.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_STATICMEMBERS_CLASEA_H_
#define INCLUDE_STATICMEMBERS_CLASEA_H_

#include <iostream>
#include <string>

class ClaseA {
private:
	std::string name;

public:
	ClaseA(std::string name);

	const std::string& getName() const;
	void setName(const std::string& name);

	static int counter;
	static void displayCounter();
};



#endif /* INCLUDE_STATICMEMBERS_CLASEA_H_ */

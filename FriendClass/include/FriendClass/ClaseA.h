/*
 * ClaseA.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_FRIENDCLASS_CLASEA_H_
#define INCLUDE_FRIENDCLASS_CLASEA_H_


#include <iostream>
#include <string>

class ClaseB;

class ClaseA {
private:
	std::string name;
	void function00();
public:
	ClaseA(std::string name);
	~ClaseA();

	const std::string& getName() const;
	void setName(const std::string& name);

	void function01();

	friend ClaseB;
};

#endif /* INCLUDE_FRIENDCLASS_CLASEA_H_ */

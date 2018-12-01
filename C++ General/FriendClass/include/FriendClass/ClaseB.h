/*
 * ClaseB.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_FRIENDCLASS_CLASEB_H_
#define INCLUDE_FRIENDCLASS_CLASEB_H_

#include <iostream>
#include <string>
#include "FriendClass/ClaseA.h"

class ClaseB {
private:
	std::string name;
	ClaseA* b;
public:
	ClaseB(std::string name);
	~ClaseB();

	void function02();

	const std::string& getName() const;
	void setName(const std::string& name);
};

#endif /* INCLUDE_FRIENDCLASS_CLASEB_H_ */

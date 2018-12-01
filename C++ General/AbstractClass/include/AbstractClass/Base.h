/*
 * Base.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_ABSTRACTCLASS_BASE_H_
#define INCLUDE_ABSTRACTCLASS_BASE_H_

#include <iostream>
#include <string>

class Base {
private:
	std::string name;
public:
	Base(std::string name);
	virtual ~Base();

	const std::string& getName() const;
	void setName(const std::string& name);

	virtual void function01() = 0;

};

#endif /* INCLUDE_ABSTRACTCLASS_BASE_H_ */

/*
 * Base.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_FUNCTIONOVERRIDING_BASE_H_
#define INCLUDE_FUNCTIONOVERRIDING_BASE_H_

#include <iostream>
#include <string>

class Base {
private:
	int x;
	std::string name;
public:
	//----- CONSTRUCTORS/DESTRUCTORS ---------//
	Base(int a = 0, std::string name = "");
    virtual ~Base() {}
	//----- ACCESSORS/MUTATORS ---------------//
	int getX() const;
	void setX(int x);
	const std::string& getName() const;
	void setName(const std::string& name);
	//----- FACILATORS -----------------------//
	virtual void display();

};

#endif /* INCLUDE_FUNCTIONOVERRIDING_BASE_H_ */

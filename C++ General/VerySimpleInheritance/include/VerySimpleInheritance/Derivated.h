/*
 * Derivated.h
 *
 *  Created on: 24/11/2018
 *      Author: Jose Edgardo
 */

#ifndef INCLUDE_VERYSIMPLEINHERITANCE_DERIVATED_H_
#define INCLUDE_VERYSIMPLEINHERITANCE_DERIVATED_H_

#include <VerySimpleInheritance/Base.h>

class Derivated: public Base {
private:
	int y;
public:
	Derivated();
	// --------- GETTERS/SETTERS --------------- //
	int getY() const;
	void setY(int y);
	// --------- --------------- --------------- //
	void display();

};

#endif /* INCLUDE_VERYSIMPLEINHERITANCE_DERIVATED_H_ */

/*
 * External.h
 *
 *  Created on: 25/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_INNERCLASS_EXTERNAL_H_
#define INCLUDE_INNERCLASS_EXTERNAL_H_

#include <iostream>
#include <string>

class External {
private:
	std::string name;
public:
	External(std::string name);

	const std::string& getName() const;
	void setName(const std::string& name);

	class Inner{
	public:
		void functionInternal(){
			std::cout << "----- Internal counter: " << counter << std::endl;
		}
	};

	Inner i;

	void functionExternal() {
		std::cout << "----- External counter: " << counter << std::endl;
		i.functionInternal();
	}

	static int counter;
};

#endif /* INCLUDE_INNERCLASS_EXTERNAL_H_ */

/*
 * ClassTemplate.h
 *
 *  Created on: 27/11/2018
 *      Author: José Edgardo Morales Barroso
 */

#ifndef INCLUDE_CLASSTEMPLATE_CLASSTEMPLATE_H_
#define INCLUDE_CLASSTEMPLATE_CLASSTEMPLATE_H_

#include <iostream>
#include <typeinfo>

template <class T>
class ClassTemplate {
	T value;
public:
	ClassTemplate(T value);
	void display();
};

template<class T>
ClassTemplate<T>::ClassTemplate(T value) {
	this->value = value;
}

template<class T>
void ClassTemplate<T>::display() {
	std::cout << "Type: " << typeid(value).name() << " - Value: " << value << std::endl;
}
#endif /* INCLUDE_CLASSTEMPLATE_CLASSTEMPLATE_H_ */

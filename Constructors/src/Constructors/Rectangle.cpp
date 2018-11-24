/*
 * Rectangle.cpp
 *
 *  Created on: 23/11/2018
 *      Author: Jose Edgardo
 */

#include "Constructors/Rectangle.h"

Rectangle::Rectangle() {
	setBase(0.0f);
	setHeight(0.0f);

}

Rectangle::Rectangle(float a, float b) {
	setBase(a);
	setHeight(b);
}

Rectangle::Rectangle(Rectangle& oriRect) {
	setBase(oriRect.getBase());
	setHeight(oriRect.getHeight());
}

void Rectangle::print() {
	std::cout << "-------------------" << std::endl;
	std::cout << "Base: " << getBase() << std::endl;
	std::cout << "Height: " << getHeight() << std::endl;
	std::cout << "Area: " << area() << std::endl;
	std::cout << "Perimeter: " << perimeter() << std::endl;
	std::cout << "-------------------" << std::endl;


}

float Rectangle::area() {
	return getBase()*getHeight();
}

float Rectangle::perimeter() {
	return 2*(getBase() + getHeight());
}

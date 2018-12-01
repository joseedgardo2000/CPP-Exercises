/*
 * Rectangle.cpp
 *
 *  Created on: 22/11/2018
 *  Author: Jose Edgardo Morales Barroso
 */
#include <PropertyAccesorMutator/Rectangle.h>

float Rectangle::area()
{
	return base*height;
}

float Rectangle::perimeter() {
	return 2*(base + height);
}



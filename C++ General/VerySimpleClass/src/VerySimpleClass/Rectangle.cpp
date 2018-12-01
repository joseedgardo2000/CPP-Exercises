/*
 * Rectangle.cpp
 *
 *  Created on: 21/11/2018
 *      Author: Jose Edgardo
 */

#include "VerySimpleClass/Rectangle.h"

float Rectangle::area()
{
	return base*height;
}

float Rectangle::perimeter() {
	return 2*(base + height);
}



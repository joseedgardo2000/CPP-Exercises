/*
 * Rectangle.h
 *
 *  Created on: 23/11/2018
 *      Author: Jose Edgardo
 */

#ifndef INCLUDE_CONSTRUCTORS_RECTANGLE_H_
#define INCLUDE_CONSTRUCTORS_RECTANGLE_H_

#include <iostream>

class Rectangle {
private:
	float base;
	float height;
public:
	Rectangle();
	Rectangle(float a, float b=10.0f);
	Rectangle(Rectangle& oriRect);

	// ----------- GETTERS / SETTERS ---------- //
	float getBase() const {
		return base;
	}

	void setBase(float base) {
		this->base = base >= 0 ? base : base*-1;
	}

	float getHeight() const {
		return height;
	}

	void setHeight(float height) {
		this->height = height >=0 ? height : height*-1;
	}

	// ---------------------------------------- //

	float area();
	float perimeter();
	void print();
};

#endif /* INCLUDE_CONSTRUCTORS_RECTANGLE_H_ */

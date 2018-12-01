/*
 * Rectangle.h
 *
 *  Created on: 22/11/2018
 *      Author: Jose Edgardo
 */

#ifndef INCLUDE_PROPERTYACCESORMUTATOR_RECTANGLE_H_
#define INCLUDE_PROPERTYACCESORMUTATOR_RECTANGLE_H_

class Rectangle {
private:
	float base=0.0f;
	float height=0.0f;
public:
	float area();
	float perimeter();

	float getBase() const {
		return base;
	}

	void setBase(float base = 0.0f) {
		this->base = base>=0 ? base : base*-1;
	}

	float getHeight() const {
		return height;
	}

	void setHeight(float height = 0.0f) {
		this->height = height>=0 ? height : height * -1;
	}
};

#endif /* INCLUDE_PROPERTYACCESORMUTATOR_RECTANGLE_H_ */

#pragma once
#ifndef TRIANGE_H
#define TRIANGE_H

#include "Shape.h"

class Triangle : public Shape {

public:
	Triangle(const std::string& nm, const std::string& desc);// cotrfor name and desv to be pased to shape to string
	virtual ~Triangle() = default;// dtor
	virtual void set_base(int b) = 0;// to set base
	virtual int get_base() const = 0;// to get base
	virtual int get_height() const = 0;//to get height
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const override = 0;// to draw to be implemeted byb the child

	virtual int get_bheight() const override;// to get box height
	virtual int get_width() const override;//tog et width

	virtual double area() const override;// to get area and overridden by child
	virtual double perimeter() const override = 0;// to get perimeter and overridden by child
	virtual int shape_perimeter() const override = 0;// to get shape perimeter and overridden by child
	virtual int shape_area() const override = 0;// to get shape area and overridden by child
};
#endif 
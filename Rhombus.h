#pragma once
#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Shape.h"

class Rhombus : public Shape {
private:
	int d;
public:
	Rhombus(const int& diagonal, const std::string& desc, const std::string& desc1);//ctor with name and desc
	Rhombus(const int& diagonal);// ctor with diagonal

	virtual ~Rhombus() = default;// dtor

	virtual int get_width() const override;//to get width
	virtual int get_bheight() const override;// to get box height
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const override;// to drw the shape


	virtual double area() const override;// to get the area
	virtual double perimeter() const override;// to get the perimeter
	virtual int shape_perimeter() const override;// to get the box perimeter
	virtual int shape_area() const override;//to get shape
	
};


#endif //SHAPES_RHOMBUS_H


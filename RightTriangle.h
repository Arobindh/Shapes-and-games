#pragma once
#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
private:
	int b;
public:
	RightTriangle(const int& base);// contrucot with the base
	RightTriangle(const int& base, const std::string& desc);// constructor woth base and desc
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const override;// method to draw
	virtual void set_base(int base) override;// to set base
	virtual int get_height() const override;// to get height
	virtual int get_base() const override;// to get base
	virtual double perimeter() const override;// to get perimeter
	virtual int shape_perimeter() const override;// to get shape perimeter
	virtual int shape_area() const override;// to get shape area
};


#endif 


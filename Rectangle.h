#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>
using namespace std;

class Rectangle : public Shape {
private:
	int w, h;
	string name = "Four_sided";
	string desc = "Four right angle";
public:
	Rectangle(const int& width, const int& height);// contructor 
	Rectangle(const int& width, const int& height, const string& name, const string& desc);// contructor with name and desc
	virtual ~Rectangle() = default;// destructor
	virtual double area() const override;// area
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const override;// to draw rectangle
	virtual int get_width() const override;// to get width of the shape
	virtual int get_bheight() const override;// to get the width of the shape
	virtual double perimeter() const override;// to get the periemeter
	virtual int shape_perimeter() const override;// to get shape perimeter
	virtual int shape_area() const override;
};


#endif 
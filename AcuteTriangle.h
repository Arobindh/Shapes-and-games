#ifndef ACUTETRIANGLE_H
#define ACUTETRIANGLE_H

#include "Triangle.h"

class AcuteTriangle : public Triangle {
private:
	int b, h;
	void set_height();
public:
	AcuteTriangle(const int& base);// contructor with base
	AcuteTriangle(const int& base, const std::string& desc); // contructor with base and desc
	virtual void set_base(int b) override;// set the base
	virtual int get_height() const override;// to get the height
	virtual int get_base() const override;// to get hte base
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const override;// to draw the shape
	virtual double perimeter() const override;// to get the perimeter
	virtual int shape_perimeter() const override;// to get the s\hape perimeter
	virtual int shape_area() const override;// to get the shape area
};


#endif 
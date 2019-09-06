#ifndef SHAPE_H
#define SHAPE_H

#include <ostream>
#include <vector>
#include <sstream>

class Shape {
private:
	std::string description;
	std::string name;
	const int id;
	static int serial;

public:
	Shape(const std::string& n, const std::string& desc);// constructor to be used from allt he child for name and descriptiton

	virtual ~Shape() = default;// destructor

	friend std::ostream& operator<<(std::ostream& os, const Shape& shape);//ostream to print
	void write_image_to_stream(std::ostream& op, char charDraw = '*', char fillChar = ' ') const;
	void draw_on_screen(char charDraw = '*', char fillChar = ' ') const;
	std::string toString() const;

	virtual int get_width() const = 0;// to get the width pf the shape
	virtual int get_bheight() const = 0;// to get the height of the shape
	virtual std::vector<std::vector<char>>
		draw(char charDraw = '*', char fillChar = ' ') const = 0;// mehtod to draw the shape in vector

	virtual double area() const = 0;// area method that is overriding
	virtual double perimeter() const = 0;// perimeter method that is overriding
	virtual int shape_perimeter() const = 0;//shape area method that is overriding
	virtual int shape_area() const = 0;// shape perimeter method that is overriding
	std::string get_name();
};


#endif 
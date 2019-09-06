#include "Rectangle.h"


double Rectangle::area() const
{
	return double(w * h);
}

std::vector<std::vector<char>>
Rectangle::draw(char charDraw, char fillChar) const
{
	std::vector<std::vector<char>> grid;
	std::vector<char> row;
	for (int i = 0;i < w;++i) { row.push_back(charDraw); }
	for (int i = 0;i < h;i++) { grid.push_back(row); }
	return grid;
}



int Rectangle::get_width() const
{
	return w;
}

int Rectangle::get_bheight() const
{
	return h;
}

double Rectangle::perimeter() const
{
	return 2 * (h + w);
}

int Rectangle::shape_perimeter() const
{
	return 2 * (h + w) - 4;
}

int Rectangle::shape_area() const
{
	return h * w;
}

Rectangle::Rectangle(const int& width, const int& height)
	: Shape("Four sided", "Four right angles")
{
	w = width;
	h = height;
}

Rectangle::Rectangle(const int& width, const int& height, const string& name, const string&desc)
	: Shape(name, desc)
{
	w = width;
	h = height;
}

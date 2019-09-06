#include <typeinfo>
#include "Shape.h"
#include <ostream>
#include <iostream>
#include <sstream>
#include <iomanip>


int Shape::serial = 0;

Shape::Shape(const std::string& n, const std::string& desc)
	: id(++serial),
	name(n),
	description(desc)
{
	name = n;
	description = desc;
}
std::ostream& operator<<(std::ostream& op, const Shape& shape)
{
	op << shape.toString();
	return op;
}
  
void Shape::draw_on_screen(char charDraw, char fillChar) const
{
	write_image_to_stream(std::cout, charDraw, fillChar);
}

void Shape::write_image_to_stream(std::ostream& op, char penChar
	, char fillChar) const
{
	std::vector<std::vector<char>> g = draw(penChar, fillChar);
}

std::string Shape::toString() const
{
	std::stringstream ss;
	ss << std::fixed;
	ss << "Shape Information\n"
		<< "- - - - - - - - - - - \n"
		<< "id:            " << id << "\n"
		<< "Shape Name      " << name << "\n"
		<< "Description:   " << description << "\n"
		<< "B. box width:  " << get_width() << "\n"
		<< "B. box height: " << get_bheight() << "\n"
		<< "Scr area:      " << shape_area() << "\n"
		<< "Geo area:      " << std::setprecision(2) << area() << "\n"
		<< "Scr perimeter: " << std::setprecision(0) << shape_perimeter() << "\n"
		<< "Geo perimeter: " << std::setprecision(2) << perimeter() << "\n"
		<< "Static type:   " << typeid(this).name() << "\n"
		<< "Dynamic type:  " << typeid(*this).name() << "\n";
	return ss.str();
}

std::string Shape::get_name()
{
	return name;
}


#include "AcuteTriangle.h"
#include <cmath>

AcuteTriangle::AcuteTriangle(const int& base)
	: AcuteTriangle(base, "Generic AcuteTriangle") {}

void AcuteTriangle::set_base(int base)
{
	b = base % 2 == 0 ? base + 1 : base;
	set_height();
}


std::vector<std::vector<char>> AcuteTriangle::draw(char charDraw, char fillChar) const
{
	std::vector<std::vector<char>> grid;
	std::vector<char> row;
	for (int i = 0; i < h; ++i) {
		row.clear();
		for (int j = 0; j < b / 2 - i;++j) { row.push_back(fillChar); }
		for (int j = b / 2 - i;j <= b / 2 + i;++j) { row.push_back(charDraw); }
		for (int j = b / 2 + i + 1; j < b;++j) { row.push_back(fillChar); }
		grid.push_back(row);
	}

	return grid;
}

void AcuteTriangle::set_height()
{
	h = (b + 1) / 2;
}

int AcuteTriangle::get_height() const
{
	return h;
}
int AcuteTriangle::get_base() const
{
	return b;
}


double AcuteTriangle::perimeter() const
{
	return b + 2 * std::sqrt(0.25 * b * b + double(h * h));
}

int AcuteTriangle::shape_perimeter() const
{
	return 4 * (h - 1);
}

int AcuteTriangle::shape_area() const
{
	return h * h;
}

AcuteTriangle::AcuteTriangle(const int& base, const std::string& desc)
	: Triangle("AcuteTriangle", desc)
{
	set_base(base);
}
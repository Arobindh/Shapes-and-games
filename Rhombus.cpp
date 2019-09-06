#include "Rhombus.h"
#include <cmath>

Rhombus::Rhombus(const int& diagonal) : Rhombus(diagonal, "Card number", "Card symbol") {}

double Rhombus::area() const
{
	return d * d / 2.0;
}

std::vector<std::vector<char>> Rhombus::draw(char charDraw, char fillChar) const
{
	std::vector<std::vector<char>> grid;
	std::vector<char> row;
	int k;
	for (int i = 0; i < d; i++) {

		k = i < d / 2 ? i : d - i - 1;

		row.clear();
		for (int j = 0; j < d / 2 - k; j++) { row.push_back(fillChar); }

		for (int j = d / 2 - k; j <= d / 2 + k; j++) { row.push_back(charDraw); }

		for (int j = d / 2 + k + 1; j < d; j++) { row.push_back(fillChar); }
		grid.push_back(row);
	}

	return grid;
}

int Rhombus::get_width() const
{
	return d;
}

int Rhombus::get_bheight() const
{
	return d;
}



double Rhombus::perimeter() const
{
	return 2 * std::sqrt(2) * d;
}

int Rhombus::shape_perimeter() const
{
	return 2 * (d - 1);
}

int Rhombus::shape_area() const
{
	int n = d / 2;
	return 2 * n * (n + 1) + 1;
}

Rhombus::Rhombus(const int& diagonal, const std::string& desc, const std::string& desc1)
	: Shape("Rhombus", desc)
{
	d = diagonal % 2 == 0 ? diagonal + 1 : diagonal;
}
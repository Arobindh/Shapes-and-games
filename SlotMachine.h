#pragma once
#ifndef SHAPES_SLOTMACHINE_H
#define SHAPES_SLOTMACHINE_H

#include "Shape.h"
#include <array>

class SlotMachine {
private:
	int tokens = 10;
	std::array<Shape*, 3> shape_reel;
	std::string input_err_message = "Error! All bets must be between 1 & available tokens\n";
	int result;
	int bet = -1;
	int read_input(std::string iput);
	void display_boundary(std::array<int, 3>widths) const;
	void makeShapes();// to generate shape
	void makeShape(int r);// to generate shape using ip param
	void displayShapes();// to display shape
	void displayStatus();// to display the result
	void releaseShapes();// to set the shapes
	void Bet();// to evaluate bet

public:
	SlotMachine() = default;// ctor as shown is document
	SlotMachine(const SlotMachine&) = delete;
	SlotMachine& operator=(const SlotMachine&) = delete;
	void run();
	virtual ~SlotMachine();
};


#endif //SHAPES_SLOTMACHINE_H

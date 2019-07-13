#pragma once

#include <iostream>

class Points
{
private:
	int wins;
	int points;
public:
	Points(int wins, int points);
	~Points();
	bool operator< (Points &other);
	friend std::ostream& operator <<(std::ostream& os, const Points &other);
	friend std::istream& operator>> (std::istream& is, Points &other);
};


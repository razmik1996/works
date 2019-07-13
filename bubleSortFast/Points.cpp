#include "Points.h"

Points::Points(int wins, int points)
{
	this->wins = wins;
	this->points = points;
}

Points::~Points()
{
}

bool Points::operator<(Points & other)
{
	if (points == other.points) {
		return wins < other.wins;
	}
	else {
		return points < other.points;
	}
}

std::istream & operator>>(std::istream & is, Points &other)
{
	std::cout << "\nEnter point: ";
	is >> other.points;
	std::cout << "Enter wins: ";
	is >> other.wins;
	return is;
}

std::ostream & operator<<(std::ostream & os, const Points& other)
{
	os << "Wins: " << other.wins << " Points: " << other.points;
	return os;
}


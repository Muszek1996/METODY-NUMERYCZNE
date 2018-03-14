#pragma once
#include <vector>
#include "Punkt.h"
#include <iostream>

class NewtonianInterpolation
{
public:
	std::vector<std::vector<double>> punkty;

	NewtonianInterpolation(std::vector<Punkt> points);

	std::vector<double> countNlevelIlorazyRoznicowe(int n);

	void countIlorazyN(int n);
	

	double valueOfX(double x);
	

	NewtonianInterpolation();
	~NewtonianInterpolation();
};


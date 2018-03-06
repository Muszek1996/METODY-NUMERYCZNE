#pragma once
#include "Punkt.h"
#include <vector>

class InterpolationFunction :
    public Punkt
{
public:
    double lagrangeIOfX(int iArgument, double xArgument);
    double interpolationFunction(double xArgument);
    std::vector<Punkt> points;
    InterpolationFunction(std::vector<Punkt> punkty);
    ~InterpolationFunction();
};


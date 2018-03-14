#pragma once
#include "Punkt.h"
#include <vector>

class LagrangeInterpolation :
    public Punkt
{
public:
    double lagrangeIOfX(int iArgument, double xArgument);
    double interpolationFunction(double xArgument);
    std::vector<Punkt> points;
    LagrangeInterpolation(std::vector<Punkt> punkty);
    ~LagrangeInterpolation();
};


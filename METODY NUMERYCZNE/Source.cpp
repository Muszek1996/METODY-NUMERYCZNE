#include <iostream>
#include "Punkt.h"
#include "vector"
#include "InterpolationFunction.h"


int main()
{
    std::vector<Punkt> points;
    points.push_back(Punkt(1, 1));
    points.push_back(Punkt(4, 2));
    points.push_back(Punkt(9, 3));

    InterpolationFunction Interpolacja(points);
    double val = Interpolacja.interpolationFunction(7);
    std::cout << val;

    getchar();
    return 0;
}



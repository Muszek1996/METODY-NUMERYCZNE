#include <iostream>
#include "Punkt.h"
#include "vector"
#include "LagrangeInterpolation.h"
#include "GetFromFile.h"
#include "NewtonianInterpolation.h"


int main()
{
    std::vector<Punkt> points;
	GetFromFile dane("dane.txt");
	dane.fillPoints(points);
	if (points.size() < 1)std::cout << "ERROR";
	

    LagrangeInterpolation Interpolacja(points);
    double val = Interpolacja.interpolationFunction(7);

	NewtonianInterpolation InterpolacjaNewtona(points);
	std::cout << std::endl<< InterpolacjaNewtona.valueOfX(1);





    getchar();
    return 0;
}



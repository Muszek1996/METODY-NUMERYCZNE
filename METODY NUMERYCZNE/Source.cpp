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
	

    LagrangeInterpolation InterpolacjaLagrangea(points);
    double val = InterpolacjaLagrangea.interpolationFunction(7);

	NewtonianInterpolation InterpolacjaNewtona(points);
	std::cout << InterpolacjaNewtona.valueOfX(1) << std::endl;
	std::cout << InterpolacjaLagrangea.interpolationFunction(2) << std::endl;




    getchar();
    return 0;
}



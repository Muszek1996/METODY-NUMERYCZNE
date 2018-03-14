#include "LagrangeInterpolation.h"



double LagrangeInterpolation::lagrangeIOfX(int iArgument, double xArgument)
{
    iArgument--;
    int pointsCount = points.size();
    int fracCount = pointsCount - 1;
    double lOfiArgumentValue = 1;
    for (int i = iArgument; i <= fracCount + iArgument; i++)
    {
        if (i != iArgument)
        {
            lOfiArgumentValue *=
                ((xArgument - points[(i) % pointsCount].x)
                    /
                    (points[iArgument].x - points[(i) % pointsCount].x));
        }
    }
    return lOfiArgumentValue;

}

double LagrangeInterpolation::interpolationFunction(double xArgument)
{
    double interpolationValue = 0;
    int pointsCount = points.size();
    for (int i = 1; i <= pointsCount; i++)
        interpolationValue += lagrangeIOfX(i, xArgument)*points[i - 1].y;
    return interpolationValue;
}



LagrangeInterpolation::LagrangeInterpolation(std::vector<Punkt> points)
{
    LagrangeInterpolation::points = points;
}

LagrangeInterpolation::~LagrangeInterpolation()
{
}

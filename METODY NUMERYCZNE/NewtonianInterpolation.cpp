#include "NewtonianInterpolation.h"





NewtonianInterpolation::NewtonianInterpolation(std::vector<Punkt> points){

std::vector<double> punktyX, punktyY;
	for(int i=0;i<points.size();i++)
	{
		punktyX.push_back(points[i].x);
		punktyY.push_back(points[i].y);
	}
	punkty.push_back(punktyX);
	punkty.push_back(punktyY);
}

std::vector<double> NewtonianInterpolation::countNlevelIlorazyRoznicowe(int n)
{

	int realN = n;
	++n;
	int iloscPunktowInterpolowanych = punkty[0].size();
	int iloscPunktowPoprzedniegoStopnia = punkty[n - 1].size();
	std::vector<double> pointsOfNLevel;
	for (int i = 0; i<(iloscPunktowPoprzedniegoStopnia - 1); i++)
	{
		pointsOfNLevel.push_back((punkty[n - 1][i + 1] - punkty[n - 1][i]) / (punkty[0][i + realN] - punkty[0][i]));
	}
	punkty.push_back(pointsOfNLevel);


	return punkty[n];
}

void NewtonianInterpolation::countIlorazyN(int n)
{
	{
		for (int i = 1; i <= n; i++)
		{
			countNlevelIlorazyRoznicowe(i);
		}
	}
}

double NewtonianInterpolation::valueOfX(double x)
{
	double sum = 0;
	double mnożnik = 1;
	countIlorazyN(punkty[0].size());
	//countIlorazyN(punkty[0].size());
	for(int i=1;i<punkty.size()-1;i++)
	{
		sum+=punkty[i][0] * mnożnik;

		mnożnik *= (x - punkty[0][i - 1]);
	}
	return sum;
}

NewtonianInterpolation::NewtonianInterpolation()
{
}


NewtonianInterpolation::~NewtonianInterpolation()
{
}

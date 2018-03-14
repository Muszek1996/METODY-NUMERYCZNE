#include "GetFromFile.h"



void GetFromFile::fillPoints(std::vector<Punkt>& points)
{
	while (!plik.eof() && plik.good())
	{
		double x, y;

		plik >> x;
		plik >> y;
		points.push_back(Punkt(x, y));
	}
}

GetFromFile::GetFromFile()
{
}

GetFromFile::GetFromFile(std::string path)
{
	GetFromFile::path = path;
	plik.open(path, std::ios_base::in);
}


GetFromFile::~GetFromFile()
{
}

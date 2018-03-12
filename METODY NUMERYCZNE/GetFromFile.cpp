#include "GetFromFile.h"



GetFromFile::GetFromFile()
{
}

GetFromFile::GetFromFile(std::string path)
{
	GetFromFile::path = path;
	plik.open(path, std::ios::in);
}


GetFromFile::~GetFromFile()
{
}

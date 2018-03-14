#pragma once
#include <string>
#include <fstream>
#include "Punkt.h"
#include <vector>

class GetFromFile
{
	std::string path;
	 
public:
	void fillPoints(std::vector<Punkt>& punkt);
	std::fstream plik;
	GetFromFile();
	GetFromFile(std::string path);
	~GetFromFile();
};


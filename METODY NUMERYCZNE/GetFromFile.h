#pragma once
#include <string>
#include <fstream>

class GetFromFile
{
	std::string path;
	 
public:
	std::fstream plik;
	GetFromFile();
	GetFromFile(std::string path);
	~GetFromFile();
};


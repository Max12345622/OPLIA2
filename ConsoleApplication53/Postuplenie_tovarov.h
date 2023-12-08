#pragma once
#include<fstream>
#include<vector>
#include<string>
#include "date.h"
struct Postuplenie_tovarow
{
	Date data;
	std::string tovar;
	int kolichestwo = 0;

	void funcia_tovar(std::ifstream& ist, std::vector<Postuplenie_tovarow>& tovars);
};


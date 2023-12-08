#include "Postuplenie_tovarov.h"

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void print (vector<Postuplenie_tovarow>& tovars){
	for (int j = 0; j < tovars.size(); j++)
	{
		cout << tovars[j].data.day << "." << tovars[j].data.month << "." << tovars[j].data.year << "  " << tovars[j].tovar << "  " << tovars[j].kolichestwo << endl;
	}
}

int main()
{
	vector<Postuplenie_tovarow> tovars;
	Postuplenie_tovarow pos;
	setlocale(LC_ALL, "rus");
	ifstream ist("in.txt");
	pos.funcia_tovar(ist, tovars);
	print(tovars);
	ist.close();
	return 0;
}


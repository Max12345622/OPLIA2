#include "date.h"
void Date::funcia_date (std::ifstream& ist)
{
	int d = 0, m = 0, y = 0;
	ist >> d;
	ist.get();
	ist >> m;
	ist.get();
	ist >> y;
	day = d;
	month = m;
	year = y;

}
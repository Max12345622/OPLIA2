#include "Postuplenie_tovarov.h"
void Postuplenie_tovarow::funcia_tovar(std::ifstream& ist,std::vector<Postuplenie_tovarow>& tovars) {
	Postuplenie_tovarow one;
	while (!ist.eof()) {
		one.data.funcia_date(ist);
		ist >> one.tovar;
		ist >> one.kolichestwo;
		tovars.push_back(one);
	}
}

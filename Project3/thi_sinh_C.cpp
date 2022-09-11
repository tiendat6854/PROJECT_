#include "thi_sinh_C.h"

thi_sinh_C::thi_sinh_C() = default;

thi_sinh_C::thi_sinh_C(string _id, string _name, string _add, int _pri)
		   : thi_sinh(_id, _name, _add, _pri) {}

thi_sinh_C::~thi_sinh_C() = default;

void thi_sinh_C::Xuat(ostream& os)
{
	thi_sinh::Xuat(os);
	os << "khoi thi C: Van, Su, Dia" << endl;
}
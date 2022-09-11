#include "thi_sinh_A.h"

thi_sinh_A::thi_sinh_A() = default;

thi_sinh_A::thi_sinh_A(string _id, string _name, string _add, int _pri)
		   : thi_sinh(_id, _name, _add, _pri)
{}
thi_sinh_A::~thi_sinh_A() = default;

void thi_sinh_A::Xuat(ostream& os)
{
	thi_sinh::Xuat(os);
	os << "khoi thi A: Toan, Ly, Hoa" << endl;
}
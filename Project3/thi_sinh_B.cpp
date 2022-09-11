#include "thi_sinh_B.h"

thi_sinh_B::thi_sinh_B() = default;

thi_sinh_B::thi_sinh_B(string _id, string _name, string _add, int _pri)
		   : thi_sinh(_id, _name, _add, _pri) {}

thi_sinh_B::~thi_sinh_B() = default;

void thi_sinh_B::Xuat(ostream& os)
{
	thi_sinh::Xuat(os);
	os << "khoi thi B: Toan, Hoa, Sinh" << endl;
}
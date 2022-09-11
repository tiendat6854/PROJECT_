#include "QLHS.h"

QLHS::QLHS() = default;
QLHS::~QLHS() = default;

void QLHS::addHS()
{
	student st;
	st.Nhap();
	dsHs.push_back(st);
}
void QLHS::inHS()
{
	for (int i = 0; i < dsHs.size(); i++)
	{
		cout << "hoc sinh thu " << i + 1 << " :" << endl;
		dsHs[i].Xuat(cout);
		cout << "----------------------\n";
	}
}
void QLHS::inHS_20()
{
	for (int i = 0; i < dsHs.size(); i++)
	{
		if (dsHs[i].getAge() == 20)
		{
			dsHs[i].Xuat(cout);
			cout << "----------------------\n";
		}
	}
}
int QLHS::soLuong23DN()
{
	int count = 0;
	for (int i = 0; i < dsHs.size(); i++)
	{
		if (dsHs[i].getAge() == 23 && dsHs[i].getAdd() == "DN")
		{
			count++;
		}
	}
	return count;
}
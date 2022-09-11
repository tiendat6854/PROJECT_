#include "ho_gia_dinh.h"

ho_gia_dinh::ho_gia_dinh() = default;

ho_gia_dinh::ho_gia_dinh(vector<nguoi> _mem, string _add)
			:members(_mem), add(_add)
{}
ho_gia_dinh::~ho_gia_dinh() = default;

string ho_gia_dinh::getAdd()
{
	return this->add;
}
void ho_gia_dinh::Nhap()
{
	int n;
	nguoi ng;
	members.clear();
	cout << "nhap so luong nguoi: "; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		bool checkID;
		do
		{
			cout << "nhap nguoi thu " << i + 1 << " :" << endl;
			ng.Nhap();
			checkID = dsID.insert(ng.getId()).second;
			if (checkID == false)
			{
				cout << "ID da ton tai !!!" << endl;
			}

		} while (checkID == false);

		members.push_back(ng);
	}
	cout << "nhap dia chi: "; getline(cin, this->add);
}

void ho_gia_dinh::Xuat(ostream& os)
{
	for (int i = 0; i < members.size(); i++)
	{
		os << "nguoi thu " << i+1 << " :" << endl;
		members[i].Xuat(os);
	}
	os << "dia chi: " << this->add << endl;
}
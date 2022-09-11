#include "QLBienLai.h"

void QLBienLai::addKH()
{
	bienLai bl;
	bl.Nhap();
	auto i = dsBL.insert(bl);
	if (i.second == false)
	{
		cout << "Ma bien lai da ton tai !!!" << endl;
	}
}

void QLBienLai::deleteKH()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap ma bien lai can xoa: "; getline(cin, _id);
	for (bienLai i : dsBL)
	{
		if (i.getID() == _id)
		{
			dsBL.erase(i);
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ma bien lai nay !!!" << endl;
	}
}
void QLBienLai::modifyKH()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap ma bien lai can sua thong tin: "; getline(cin, _id);
	for (bienLai i : dsBL)
	{
		if (i.getID() == _id)
		{
			i.updateKH();
			dsBL.insert(i);
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ma bien lai nay !!!" << endl;
	}
}
void QLBienLai::display()
{
	for (bienLai i : dsBL)
	{
		i.Xuat();
		cout << "----------------------\n";
	}
}

void QLBienLai::calMoney()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap ma bien lai can tinh tien: "; getline(cin, _id);
	for (bienLai i : dsBL)
	{
		if (i.getID() == _id)
		{
			cout << "so tien cua quy khach la: " << i.getMoney() << endl;
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ma bien lai nay !!!" << endl;
	}
}
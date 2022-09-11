#include "QLBienLai.h"

void QLBienLai::addKH()
{
	bienLai bl;
	bl.Nhap();
	if (verifyID(bl.getID()))
	{
		dsBL.push_back(bl);
	}
	else
	{
		cout << "ma bien lai da ton tai !!!" << endl;
	}
}

bool QLBienLai::verifyID(string id)
{
	for (int i = 0; i < dsBL.size(); i++)
	{
		if (dsBL[i].getID() == id)
		{
			return false;
			break;
		}
	}

	return true;
}

void QLBienLai::deleteKH()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap ma bien lai can xoa: "; getline(cin, _id);
	for (int i = 0; i < dsBL.size(); i++)
	{
		if (dsBL[i].getID() == _id)
		{
			dsBL.erase(dsBL.begin() + i);
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
	for (int i = 0; i < dsBL.size(); i++)
	{
		if (dsBL[i].getID() == _id)
		{
			dsBL[i].updateKH();
			dsBL.insert(dsBL.begin()+i, dsBL[i]);
			dsBL.erase(dsBL.begin() + i);
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
#include "QLGV.h"

void QLGV::addGV()
{
	GV teacher;
	teacher.Input();
	auto i = dsGV.insert(teacher);
	if (i.second == false)
	{
		cout << "ID da ton tai !!!" << endl;
	}
}
void QLGV::deleteGV()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap id cua GV can xoa: "; getline(cin, _id);
	for (GV i : dsGV)
	{
		if (i.getID() == _id)
		{
			dsGV.erase(i);
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ID nay !!!" << endl;
	}
}

void QLGV::display()
{
	for (GV i : dsGV)
	{
		i.Output();
		cout << "----------------------\n";
	}
}
void QLGV::calSalary()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap id cua GV can tinh luong: "; getline(cin, _id);
	for (GV i : dsGV)
	{
		if (i.getID() == _id)
		{
			cout << "luong cua GV nay la: " << i.getRealSalary() << endl;
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ID nay !!!" << endl;
	}
}
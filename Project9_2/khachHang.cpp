#include "khachHang.h"

khachHang::khachHang() = default;
khachHang::~khachHang() = default;

string khachHang::getName()
{
	return this->name;
}
int khachHang::getHomeNumber()
{
	return this->homeNumber;
}
void khachHang::Nhap()
{
	cout << "nhap ho ten chu ho: "; getline(cin, this->name);
	cout << "nhap so nha: "; cin >> this->homeNumber;
}
void khachHang::Xuat()
{
	cout << "ho ten chu ho: " << this->getName() << endl;
	cout << "so nha: " << this->getHomeNumber() << endl;
}


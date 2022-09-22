#include "intern.h"

intern::intern() = default;
intern::~intern() = default;

string intern::getMajor()
{
	return this->major;
}
string intern::getSemester()
{
	return this->semester;
}
string intern::getUni()
{
	return this->university;
}
int intern::getEmployeeType()
{
	return 2;
}
void intern::modify()
{
	employee::modify();
	cout << "nhap chuyen nganh dang hoc moi: "; getline(cin, this->major);
	cout << "nhap hoc ki dang hoc moi: "; getline(cin, this->semester);
	cout << "nhap ten truong dang hoc moi: "; getline(cin, this->university);
}
void intern::Nhap()
{
	employee::Nhap();
	cout << "nhap chuyen nganh dang hoc: "; getline(cin, this->major);
	cout << "nhap hoc ki dang hoc: "; getline(cin, this->semester);
	cout << "nhap ten truong dang hoc: "; getline(cin, this->university);
}
void intern::Xuat()
{
	employee::Xuat();
	cout << "chuyen nganh dang hoc: " << this->getMajor() << endl;
	cout << "hoc ki dang hoc: " << this->getSemester() << endl;
	cout << "ten truong dang hoc: " << this->getUni() << endl;
}
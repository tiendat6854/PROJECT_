#include "nguoi.h"

nguoi::nguoi() = default;

nguoi::nguoi(string _name, int _age, int _cccd)
	  :name(_name), age(_age), cccd(_cccd)
{}
nguoi::~nguoi() = default;

string nguoi::getName()
{
	return this->name;
}
int nguoi::getAge()
{
	return this->age;
}
int nguoi::getCccd()
{
	return this->cccd;
}
void nguoi::Nhap()
{
	cin.ignore();
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap tuoi: "; cin >> this->age;
	cout << "nhap cccd: "; cin >> this->cccd;
}
void nguoi::Xuat(ostream& os)
{
	os << "ho ten: " << this->getName() << endl;
	os << "tuoi: " << this->getAge() << endl;
	os << "cccd: " << this->getCccd() << endl;
}
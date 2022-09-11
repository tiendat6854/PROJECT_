#include "student.h"

student::student() = default;

student::~student() = default;

string student::getName()
{
	return this->name;
}
int student::getAge()
{
	return this->age;
}
string student::getAdd()
{
	return this->address;
}
string student::getClass()
{
	return this->className;
}
void student::Nhap()
{
	cin.ignore();
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap tuoi: "; cin >> this->age;
	cin.ignore();
	cout << "nhap dia chi: "; getline(cin, this->address);
	cout << "nhap lop: "; getline(cin, this->className);
}
void student::Xuat(ostream& os)
{
	os << "ho ten: " << this->getName() << endl;
	os << "tuoi: " << this->getAge() << endl;
	os << "dia chi: " << this->getAdd() << endl;
	os << "lop: " << this->getClass() << endl;
}
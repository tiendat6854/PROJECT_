#include "Student.h"

Student::Student() = default;
Student::~Student() = default;

string Student::getName()
{
	return this->name;
}
int Student::getAge()
{
	return this->age;
}
string Student::getClass()
{
	return this->className;
}
void Student::Nhap()
{
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap tuoi: "; cin >> this->age;
	cin.ignore();
	cout << "nhap ten lop: "; getline(cin, this->className);
}
void Student::Xuat()
{
	cout << "ho ten: " << this->getName() << endl;
	cout << "tuoi: " << this->getAge() << endl;
	cout << "lop: " << this->getClass() << endl;
}
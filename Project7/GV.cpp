#include "GV.h"

GV::GV() = default;
GV::~GV() = default;

int GV::getSalary()
{
	return this->salary;
}
int GV::getBonus()
{
	return this->bonus;
}
int GV::getPenalty()
{
	return this->penalty;
}
int GV::getRealSalary()
{
	this->realSalary = this->getSalary() + this->getBonus() - this->getPenalty();
	return this->realSalary;
}
string GV::getName()
{
	return this->name;
}
int GV::getAge()
{
	return this->age;
}
string GV::getAdd()
{
	return this->address;
}
string GV::getID()
{
	return this->id;
}

bool operator < (const GV& a, const GV& b)
{
	return a.id < b.id;
}

void GV::Input()
{
	cout << "nhap luong cung: "; cin >> this->salary;
	cout << "nhap luong thuong: "; cin >> this->bonus;
	cout << "nhap tien phat: "; cin >> this->penalty;
	cin.ignore();
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap tuoi: "; cin >> this->age;
	cin.ignore();
	cout << "nhap que quan: "; getline(cin, this->address);
	cout << "nhap id: "; getline(cin, this->id);
}
void GV::Output()
{
	cout << "luong cung: " << this->getSalary() << endl;
	cout << "luong thuong: " << this->getBonus() << endl;
	cout << "tien phat: " << this->getPenalty() << endl;
	cout << "luong thuc linh: " << this->getRealSalary() << endl;
	cout << "ho ten: " << this->getName() << endl;
	cout << "tuoi: " << this->getAge() << endl;
	cout << "que quan: " << this->getAdd() << endl;
	cout << "id: " << this->getID() << endl;
}
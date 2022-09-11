#include "thi_sinh.h"

thi_sinh::thi_sinh() = default;

thi_sinh::thi_sinh(string _id, string _name, string _add, int _pri)
		 :id(_id), name(_name), address(_add), priority(_pri)
{}
thi_sinh::~thi_sinh() = default;

string thi_sinh::getId()
{
	return this->id;
}
string thi_sinh::getName()
{
	return this->name;
}
string thi_sinh::getAdd()
{
	return this->address;
}
int thi_sinh::getPri()
{
	return this->priority;
}
void thi_sinh::Nhap()
{
	cin.ignore();
	cout << "nhap id: "; getline(cin, this->id);
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap dia chi: "; getline(cin, this->address);
	cout << "nhap muc uu tien: "; cin >> this->priority;
}
void thi_sinh::Xuat(ostream& os)
{
	os << "id: " << this->getId() << endl;
	os << "ho ten: " << this->getName() << endl;
	os << "dia chi: " << this->getAdd() << endl;
	os << "muc uu tien: " << this->getPri() << endl;
}
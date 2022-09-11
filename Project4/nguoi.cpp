#include "nguoi.h"

nguoi::nguoi() = default;

nguoi::nguoi(string _name, int _age, string _job, string _id)
	  :name(_name), age(_age), job(_job), id(_id)
{}
nguoi::~nguoi() = default;

string nguoi::getName()
{
	return this->name;
}
string nguoi::getJob()
{
	return this->job;
}
int nguoi::getAge()
{
	return this->age;
}
string nguoi::getId()
{
	return this->id;
}
void nguoi::nguoi::Nhap()
{
	cout << "nhap ho ten: "; getline(cin, this->name);
	cout << "nhap tuoi: "; cin >> this->age;
	cin.ignore();
	cout << "nhap nghe nghiep: "; getline(cin, this->job);
	cout << "nhap CCCD: "; getline(cin, this->id);
}
void nguoi::Xuat(ostream& os)
{
	os << "ho ten: " << this->getName() << endl;
	os << "tuoi: " << this->getAge() << endl;
	os << "nghe nghiep: " << this->getJob() << endl;
	os << "CCCD: " << this->getId() << endl;
}
#include "goodStudent.h"

goodStudent::goodStudent() = default;
goodStudent::~goodStudent() = default;

double goodStudent::getGpa()
{
	return this->gpa;
}
string goodStudent::getBestReward()
{
	return this->bestReward;
}
int goodStudent::getType()
{
	return 1;
}

void goodStudent::Nhap()
{
	student::Nhap();
	cout << "nhap gpa: "; cin >> this->gpa;
	cin.ignore();
	cout << "nhap ten giai thuong: "; getline(cin, this->bestReward);
}
void goodStudent::Xuat()
{
	student::Xuat();
	cout << "xep loai gioi" << endl;
	cout << "gpa: " << this->getGpa() << endl;
	cout << "ten giai thuong: " << this->getBestReward() << endl;
}
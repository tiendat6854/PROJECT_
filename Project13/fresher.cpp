#include "fresher.h"

fresher::fresher() = default;
fresher::~fresher() = default;

string fresher::getGraDate()
{
	return this->graDate;
}
string fresher::getGraRank()
{
	return this->graRank;
}
string fresher::getEdu()
{
	return this->edu;
}
int fresher::getEmployeeType()
{
	return 1;
}

void fresher::modify()
{
	employee::modify();
	cout << "nhap thoi gian tot nghiep moi: "; getline(cin, this->graDate);
	cout << "nhap loai tot nghiep moi: "; getline(cin, this->graRank);
	cout << "nhap truong tot nghiep moi: "; getline(cin, this->edu);
}
void fresher::Nhap()
{
	employee::Nhap();
	cout << "nhap thoi gian tot nghiep: "; getline(cin, this->graDate);
	cout << "nhap loai tot nghiep: "; getline(cin, this->graRank);
	cout << "nhap truong tot nghiep: "; getline(cin, this->edu);
}
void fresher::Xuat()
{
	employee::Xuat();
	cout << "thoi gian tot nghiep: " << this->getGraDate() << endl;
	cout << "tot nghiep loai: " << this->getGraRank() << endl;
	cout << "tot nghiep truong: " << this->getEdu() << endl;
}
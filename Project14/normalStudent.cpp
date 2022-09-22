#include "normalStudent.h"

normalStudent::normalStudent() = default;
normalStudent::~normalStudent() = default;

int normalStudent::getEngScore()
{
	return this->engScore;
}
double normalStudent::getEntryTest()
{
	return this->entryTest;
}

int normalStudent::getType()
{
	return 0;
}
void normalStudent::Nhap()
{
	student::Nhap();
	cout << "nhap diem TOEIC: "; cin >> this->engScore;
	cout << "nhap diem thi dau vao: "; cin >> this->entryTest;
}
void normalStudent::Xuat()
{
	student::Xuat();
	cout << "xep loai trung binh " << endl;
	cout << "diem TOEIC: " << this->getEngScore() << endl;
	cout << "diem thi dau vao: " << this->getEntryTest() << endl;
}
#include "Room.h"

Room::Room() = default;
Room::~Room() = default;

int Room::getNgay()
{
	return this->soNgay;
}

void Room::Nhap()
{
	cout << "nhap so ngay thue: ";
	cin >> this->soNgay;
}

void Room::Xuat(ostream& os)
{
	os << "So ngay thue: " << this->getNgay() << endl;
}
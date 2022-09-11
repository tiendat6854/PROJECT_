#include "RoomB.h"

RoomB::RoomB()
{
	this->loai_phong = "B";
	this->gia = 300;
}

RoomB::~RoomB() = default;

string RoomB::getPhong()
{
	return this->loai_phong;
}
int RoomB::getGia()
{
	return this->gia;
}

void RoomB::Xuat(ostream& os)
{
	os << "Room: " << this->getPhong() << endl;
	os << "Gia: " << this->getGia() << endl;
	Room::Xuat(os);
}
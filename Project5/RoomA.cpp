#include "RoomA.h"

RoomA::RoomA()
{
	this->loai_phong = "A";
	this->gia = 500;
}
RoomA::~RoomA() = default;

string RoomA::getPhong()
{
	return this->loai_phong;
}
int RoomA::getGia()
{
	return this->gia;
}

void RoomA::Xuat(ostream& os)
{
	os << "Room: " << this->getPhong() << endl;
	os << "Gia: " << this->getGia() << endl;
	Room::Xuat(os);
}
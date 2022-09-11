#include "RoomC.h"

RoomC::RoomC()
{
	this->loai_phong = "C";
	this->gia = 100;
}

RoomC::~RoomC() = default;

string RoomC::getPhong()
{
	return this->loai_phong;
}
int RoomC::getGia()
{
	return this->gia;
}

void RoomC::Xuat(ostream& os)
{
	os << "Room: " << this->getPhong() << endl;
	os << "Gia: " << this->getGia() << endl;
	Room::Xuat(os);
}
#pragma once
#include "Room.h"

class RoomA : public Room
{
public:
	RoomA();
	~RoomA();
	string getPhong();
	int getGia();
	void Xuat(ostream&);
};


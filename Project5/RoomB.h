#pragma once
#include "Room.h"

class RoomB: public Room
{
public:
	RoomB();
	~RoomB();
	string getPhong();
	int getGia();
	void Xuat(ostream&);
};



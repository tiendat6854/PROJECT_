#pragma once
#include "Room.h"

class RoomC : public Room
{
public:
	RoomC();
	~RoomC();
	string getPhong();
	int getGia();
	void Xuat(ostream&);
};


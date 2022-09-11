#pragma once
#include <vector>
#include <fstream>
#include <memory>

#include "nguoi.h";
#include "Room.h"
#include "RoomA.h"
#include "RoomB.h"
#include "RoomC.h"

enum SELECT { ROOM_A = 1, ROOM_B, ROOM_C };

class khach_san
{
private:
	vector<nguoi> dsNguoi;
	vector<unique_ptr<Room>> dsRoom;
public:
	void themKhach();
	bool verifyID(int);
	void inDSKhach(ostream&);
	void xoaKhach();
	void tinhTien();
};


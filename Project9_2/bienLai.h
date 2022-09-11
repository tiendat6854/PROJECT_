#pragma once
#include "khachHang.h"

class bienLai
{
private:
	string ID;
	khachHang kh;
	int oldIndex;
	int newIndex;
	int money;
public:
	bienLai();
	~bienLai();
	string getID();
	int getOldIndex();
	int getNewIndex();
	int getMoney();
	friend bool operator < (const bienLai&, const bienLai&);
	void updateKH();
	void Nhap();
	void Xuat();
};


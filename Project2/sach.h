#pragma once
#include "tai_lieu.h"

class sach : public tai_lieu
{
private:
	string tenTG;
	int soTrang;
public:
	sach();
	sach(string, string, int, string, int);
	~sach();
	string getType();
	string getTG();
	int getSoTrang();
	void Nhap();
	void Xuat(ostream& os);
};


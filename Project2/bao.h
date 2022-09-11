#pragma once

#include "tai_lieu.h"

class bao : public tai_lieu
{
private:
	int ngayPH;
public:
	bao();
	bao(string, string, int, int);
	~bao();
	string getType();
	int getNgayPH();
	void Nhap();
	void Xuat(ostream& os);
};


#pragma once

#include "tai_lieu.h"

class tap_chi : public tai_lieu
{
private:
	int soPH;
	int thangPH;
public:
	tap_chi();
	tap_chi(string, string, int, int, int);
	~tap_chi();
	string getType();
	int getSoPH();
	int getThangPH();
	void Nhap();
	void Xuat(ostream& os);
};


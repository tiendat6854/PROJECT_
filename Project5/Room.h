#pragma once
#include <iostream>
#include <string>
using namespace std;

class Room
{
protected:
	string loai_phong;
	int gia;
	int soNgay;
public:
	Room();
	virtual ~Room();
	int getNgay();
	virtual string getPhong() = 0;
	virtual int getGia() = 0;
	void Nhap();
	virtual void Xuat(ostream&);
};


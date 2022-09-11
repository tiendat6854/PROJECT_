#pragma once
#include <iostream>
#include <string>
using namespace std;

class khachHang
{
private:
	string name;
	int homeNumber;
public:
	khachHang();
	~khachHang();
	string getName();
	int getHomeNumber();
	void Nhap();
	void Xuat();
};


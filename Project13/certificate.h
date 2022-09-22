#pragma once
#include <iostream>
#include <string>
using namespace std;

class certificate
{
	string cerID;
	string cerName;
	string cerRank;
	string cerDate;
public:
	certificate();
	~certificate();
	string getCerID();
	string getCerName();
	string getCerRank();
	string getCerDate();
	void Nhap();
	void Xuat();
};


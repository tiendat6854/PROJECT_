#pragma once

#include <iostream>
#include <string>
using namespace std;

class tai_lieu
{
protected:
	string id;
	string nxb;
	int so_ban;
public:
	tai_lieu();
	tai_lieu(string, string, int);
	virtual ~tai_lieu();
	virtual string getType() = 0;
	string getId();
	string getNXB();
	int getSo_ban();
	virtual void Nhap();
	virtual void Xuat(ostream&);
};


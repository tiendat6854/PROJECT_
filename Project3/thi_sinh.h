#pragma once
#include <iostream>
#include <string>
using namespace std;

class thi_sinh
{
protected:
	string id;
	string name;
	string address;
	int priority;
public:
	thi_sinh();
	thi_sinh(string, string, string, int);
	virtual ~thi_sinh();
	string getId();
	string getName();
	string getAdd();
	int getPri();
	void Nhap();
	virtual void Xuat(ostream&);
};


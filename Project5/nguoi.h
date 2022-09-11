#pragma once
#include <iostream>
#include <string>
using namespace std;

class nguoi
{
private:
	string name;
	int age;
	int cccd;
public:
	nguoi();
	nguoi(string, int, int);
	~nguoi();
	string getName();
	int getAge();
	int getCccd();
	void Nhap();
	void Xuat(ostream&);
};


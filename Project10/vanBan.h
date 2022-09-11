#pragma once
#include <iostream>
#include <string>
using namespace std;

class vanBan
{
private:
	string st;
public:
	vanBan();
	vanBan(string);
	~vanBan();
	string getString();
	void Nhap();
	int countTu();
	int countChar_A();
	void standString();
};


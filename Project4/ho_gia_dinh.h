#pragma once
#include <vector>
#include <set>
#include <fstream>
#include "nguoi.h"

class ho_gia_dinh
{
private:
	vector<nguoi> members;
	set<string> dsID;
	string add;
public:
	ho_gia_dinh();
	ho_gia_dinh(vector<nguoi>, string);
	~ho_gia_dinh();
	string getAdd();
	void Nhap();
	void Xuat(ostream&);
};


#pragma once
#include "thi_sinh.h"

class thi_sinh_B : public thi_sinh
{
public:
	thi_sinh_B();
	thi_sinh_B(string, string, string, int);
	~thi_sinh_B();
	void Xuat(ostream&);
};


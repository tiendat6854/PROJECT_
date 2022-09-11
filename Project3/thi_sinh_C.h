#pragma once
#include "thi_sinh.h"

class thi_sinh_C : public thi_sinh
{
public:
	thi_sinh_C();
	thi_sinh_C(string, string, string, int);
	~thi_sinh_C();
	void Xuat(ostream&);
};


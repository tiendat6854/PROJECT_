#pragma once
#include "thi_sinh.h"

class thi_sinh_A : public thi_sinh
{
public:
	thi_sinh_A();
	thi_sinh_A(string, string, string, int);
	~thi_sinh_A();
	void Xuat(ostream&);
};


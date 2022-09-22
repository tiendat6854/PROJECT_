#pragma once
#include "student.h"

class studentTC : public student
{
	string add;
public:
	studentTC();
	~studentTC();
	int getType();
	void Nhap();
	void Xuat();
};


#pragma once
#include "student.h"

class normalStudent : public student
{
	int engScore;
	double entryTest;
public:
	normalStudent();
	~normalStudent();
	int getEngScore();
	double getEntryTest();
	int getType();
	void Nhap();
	void Xuat();
};


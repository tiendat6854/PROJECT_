#pragma once
#include "employee.h"

class intern : public employee
{
	string major;
	string semester;
	string university;
public:
	intern();
	~intern();
	string getMajor();
	string getSemester();
	string getUni();
	int getEmployeeType();
	void modify();
	void Nhap();
	void Xuat();
};


#pragma once
#include "employee.h"

class fresher : public employee
{
	string graDate;
	string graRank;
	string edu;
public:
	fresher();
	~fresher();
	string getGraDate();
	string getGraRank();
	string getEdu();
	int getEmployeeType();
	void modify();
	void Nhap();
	void Xuat();
};


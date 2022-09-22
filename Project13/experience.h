#pragma once
#include "employee.h"

class experience : public employee
{
	int exYear;
	string proSkill;
public:
	experience();
	~experience();
	int getExYear();
	string getProSkill();
	int getEmployeeType();
	void modify();
	void Nhap();
	void Xuat();
};


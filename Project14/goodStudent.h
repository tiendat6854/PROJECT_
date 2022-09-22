#pragma once
#include "student.h"

class goodStudent : public student
{
	double gpa;
	string bestReward;
public:
	goodStudent();
	~goodStudent();
	double getGpa();
	string getBestReward();
	int getType();
	void Nhap();
	void Xuat();
};


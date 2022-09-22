#pragma once
#include "khoa.h"

class UniversityManager
{
	map<string, khoa> dsKhoa;
public:
	bool SVCQ();
	double getDTB();
	int sumSVCQ();
	void sort_Type();
	void sort_Year();
	void Display();
};


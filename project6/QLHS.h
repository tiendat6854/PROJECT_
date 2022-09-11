#pragma once
#include <vector>
#include "student.h"

class QLHS
{
private:
	vector<student> dsHs;
public:
	QLHS();
	~QLHS();
	void addHS();
	void inHS();
	void inHS_20();
	int soLuong23DN();
};


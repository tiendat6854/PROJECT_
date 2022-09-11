#pragma once
#include <set>
#include "GV.h"

class QLGV
{
private:
	set<GV> dsGV;
public:
	void addGV();
	void deleteGV();
	void display();
	void calSalary();
};


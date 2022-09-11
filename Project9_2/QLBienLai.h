#pragma once
#include <set>
#include "bienLai.h"

class QLBienLai
{
private:
	set<bienLai> dsBL;
public:
	void addKH();
	void deleteKH();
	void modifyKH();
	void display();
	void calMoney();
};


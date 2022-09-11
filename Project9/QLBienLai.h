#pragma once
#include <vector>
#include "bienLai.h"

class QLBienLai
{
private:
	vector<bienLai> dsBL;
public:
	void addKH();
	void deleteKH();
	bool verifyID(string);
	void modifyKH();
	void display();
	void calMoney();
};


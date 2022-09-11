#pragma once
#include <vector>
#include <fstream>
#include <memory>

#include "thi_sinh.h"
#include "thi_sinh_A.h"
#include "thi_sinh_B.h"
#include "thi_sinh_C.h"

enum SELECT {TSA = 1, TSB, TSC, BACK};

class tuyen_sinh
{
private:
	vector<unique_ptr<thi_sinh>> dsTS;
public:
	void themTS();
	void inTS(ostream&);
	void timTS();
};


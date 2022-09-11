#pragma once
#include <vector>
#include <fstream>

#include "tai_lieu.h"
#include "bao.h"
#include "sach.h"
#include "tap_chi.h"
 
enum SELECT {SACH = 1, TAP_CHI, BAO, BACK};

class QL_sach
{
private:
	vector<tai_lieu*> dsTL;
public:
	~QL_sach();
	void themTL();
	void xoaTL();
	void inTL(ostream&);
	void timTL();
	bool verifyID(string);
};


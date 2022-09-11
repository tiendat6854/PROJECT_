#pragma once
#include "ho_gia_dinh.h"

class khu_pho
{
private:
	vector<ho_gia_dinh> hgd;
public:
	khu_pho();
	~khu_pho();
	void nhapGD();
	void inGD(ostream&);
};


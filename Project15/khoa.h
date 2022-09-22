#pragma once
#include <map>
#include <memory>
#include "student.h"
#include "studentCQ.h"
#include "studentTC.h"

class khoa
{
	string name;
	map<string, unique_ptr<student>> dsSV;
public:
	khoa();
	~khoa();
	string getName();
	void Nhap();
	void Xuat();
};


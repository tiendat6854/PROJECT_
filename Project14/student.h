#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <regex>
using namespace std;

class student
{
protected:
	string name;
	string doB;
	string sex;
	string phone;
	string uniName;
public:
	student();
	virtual ~student();
	string getName();
	string getDoB();
	string getSex();
	string getPhone();
	string getUniName();
	bool checkNamNhuan(int);
	bool checkDate(string);
	bool checkName(string);
	bool checkPhone(string);
	virtual double getGpa();
	virtual double getEntryTest();
	virtual int getType();
	virtual void Nhap();
	virtual void Xuat();
};


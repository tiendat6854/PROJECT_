#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <regex>
#include "certificate.h"

class employee
{
protected:
	string ID;
	string fullName;
	string birthDay;
	string phone;
	string email;
	vector<certificate> dsCertificate;
public:
	employee();
	virtual ~employee();
	void setID();
	string getID();
	bool checkNamNhuan(int);
	string getName();
	string getBirthDay();
	string getPhone();
	string getEmail();
	virtual int getEmployeeType();
	bool checkDate(string);
	bool checkEmail(string);
	bool checkName(string);
	bool checkPhone(string);
	virtual void modify();
	virtual void Nhap();
	virtual void Xuat();
};


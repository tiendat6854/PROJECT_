#pragma once
#include<iostream>
#include <string>
using namespace std;

class nguoi
{
protected:
	string name;
	int age;
	string job;
	string id;
public:
	nguoi();
	nguoi(string, int, string, string);
	~nguoi();
	string getName();
	string getJob();
	int getAge();
	string getId();
	void Nhap();
	void Xuat(ostream&);
};


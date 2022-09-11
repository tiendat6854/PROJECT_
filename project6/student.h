#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class student
{
private:
	string name;
	int age;
	string address;
	string className;
public:
	student();
	~student();
	string getName();
	int getAge();
	string getAdd();
	string getClass();
	void Nhap();
	void Xuat(ostream&);
};


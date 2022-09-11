#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int age;
	string className;
public:
	Student();
	~Student();
	string getName();
	int getAge();
	string getClass();
	void Nhap();
	void Xuat();
};


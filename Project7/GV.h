#pragma once
#include <iostream>
#include <string>
using namespace std;

class GV
{
private:
	int salary;
	int bonus;
	int penalty;
	int realSalary;
	string name;
	int age;
	string address;
	string id;
public:
	GV();
	~GV();
	int getSalary();
	int getBonus();
	int getPenalty();
	int getRealSalary();
	string getName();
	int getAge();
	string getAdd();
	string getID();
	friend bool operator < (const GV&, const GV&);
	void Input();
	void Output();
};


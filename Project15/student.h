#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "kqht.h"
using namespace std;

class student
{
protected:
	string id;
	string name;
	string dOB;
	int year;
	int score;
	vector<kqht> dsKQHT;
private:
	student();
	virtual ~student();
	string getID();
	string getName();
	string getDoB();
	int getYear();
	int getScore();
	virtual int getType();
	virtual void Nhap();
	virtual void Xuat();
};


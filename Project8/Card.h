#pragma once
#include "Student.h"

class Card
{
private:
	string IDCard;
	int dayBorrow;
	int dayPay;
	string IDBook;
	Student stu;
public:
	Card();
	~Card();
	string getIDCard();
	int getDayBorrow();
	int getDayPay();
	string getIDBook();
	friend bool operator < (const Card&, const Card&);
	void Nhap();
	void Xuat();
};


#include "Card.h"

Card::Card() = default;
Card::~Card() = default;

string Card::getIDCard()
{
	return this->IDCard;
}
int Card::getDayBorrow()
{
	return this->dayBorrow;
}
int Card::getDayPay()
{
	return this->dayPay;
}
string Card::getIDBook()
{
	return this->IDBook;
}
bool operator < (const Card& a, const Card& b)
{
	return a.IDCard < b.IDCard;
}
void Card::Nhap()
{
	cin.ignore();
	cout << "nhap ma the: "; getline(cin, this->IDCard);
	cout << "nhap ngay muon: "; cin >> this->dayBorrow;
	cout << "nhap ngay tra: "; cin >> this->dayPay;
	cin.ignore();
	cout << "nhap ma sach: "; getline(cin, this->IDBook);
	this->stu.Nhap();
}
void Card::Xuat()
{
	cout << "ma the: " << this->getIDCard() << endl;
	cout << "ngay muon: " << this->getDayBorrow() << endl;
	cout << "ngay tra: " << this->getDayPay() << endl;
	cout << "ma sach: " << this->getIDBook() << endl;
	this->stu.Xuat();
}
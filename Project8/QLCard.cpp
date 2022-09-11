#include "QLCard.h"

void QLCard::addCard()
{
	Card the;
	the.Nhap();
	auto i = dsCard.insert(the);
	if (i.second == false)
	{
		cout << "ID Card da ton tai !!!" << endl;
	}
}
void QLCard::deleteCard()
{
	string _id;
	bool check = false;
	cin.ignore();
	cout << "nhap ID Card can xoa: "; getline(cin, _id);
	for (Card i : dsCard)
	{
		if (i.getIDCard() == _id)
		{
			dsCard.erase(i);
			check = true;
			break;
		}
	}
	if (check == false)
	{
		cout << "khong tim thay ID Card nay !!!" << endl;
	}
}
void QLCard::display()
{
	for (Card i : dsCard)
	{
		i.Xuat();
		cout << "----------------------\n";
	}
}
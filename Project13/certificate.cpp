#include "certificate.h"

certificate::certificate() = default;
certificate::~certificate() = default;

string certificate::getCerID()
{
	return this->cerID;
}
string certificate::getCerName()
{
	return this->cerName;
}
string certificate::getCerRank()
{
	return this->cerRank;
}
string certificate::getCerDate()
{
	return this->cerDate;
}
void certificate::Nhap()
{
	cout << "nhap certificatedID: "; getline(cin, this->cerID);
	cout << "nhap certificatedName: "; getline(cin, this->cerName);
	cout << "nhap certificatedRank: "; getline(cin, this->cerRank);
	cout << "nhap certificatedDate: "; getline(cin, this->cerDate);
}
void certificate::Xuat()
{
	cout << "certificatedID: " << this->getCerID() << endl;
	cout << "certificatedName: " << this->getCerName() << endl;
	cout << "certificatedRank: " << this->getCerRank() << endl;
	cout << "certificatedDate: " << this->getCerDate() << endl;
}
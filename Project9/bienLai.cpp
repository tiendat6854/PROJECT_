#include "bienLai.h"

bienLai::bienLai() = default;
bienLai::~bienLai() = default;

string bienLai::getID()
{
	return this->ID;
}
int bienLai::getOldIndex()
{
	return this->oldIndex;
}
int bienLai::getNewIndex()
{
	return this->newIndex;
}
int bienLai::getMoney()
{
	this->money = (this->newIndex - this->oldIndex) * 5;
	return this->money;
}
void bienLai::updateKH()
{
	this->kh.Nhap();
}
void bienLai::Nhap()
{
	cin.ignore();
	cout << "nhap ma bien lai: "; getline(cin, this->ID);
	this->kh.Nhap();
	cout << "nhap chi so dien cu: "; cin >> this->oldIndex;
	cout << "nhap chi so dien moi: "; cin >> this->newIndex;
}
void bienLai::Xuat()
{
	cout << "ma bien lai: " << this->getID() << endl;
	this->kh.Xuat();
	cout << "chi so dien cu: " << this->getOldIndex() << endl;
	cout << "chi so dien moi: " << this->getNewIndex() << endl;
	cout << "so tien phai tra: " << this->getMoney() << endl;
}
#include "tai_lieu.h"

tai_lieu::tai_lieu() = default;

tai_lieu::tai_lieu(string _id, string _nxb, int _sb)
	     : id(_id), nxb(_nxb), so_ban(_sb)
{}

tai_lieu::~tai_lieu() = default;

string tai_lieu::getId()
{
	return this->id;
}
string tai_lieu::getNXB()
{
	return this->nxb;
}
int tai_lieu::getSo_ban()
{
	return this->so_ban;
}
void tai_lieu::Nhap()
{
	cin.ignore();
	cout << "nhap id: "; getline(cin, this->id);
	cout << "nhap NXB: "; getline(cin, this->nxb);
	cout << "nhap so ban: "; cin >> this->so_ban;
}
void tai_lieu::Xuat(ostream& os)
{
	os << "ID: " << this->getId() << endl;
	os << "NXB: " << this->getNXB() << endl;
	os << "So ban phat hanh: " << this->getSo_ban() << endl;
}

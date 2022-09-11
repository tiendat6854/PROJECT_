#include "sach.h"

sach::sach() = default;

sach::sach(string _id, string _nxb, int _sb, string _tg, int _st) 
	 : tai_lieu(_id, _nxb, _sb), tenTG(_tg), soTrang(_st)
{}
sach::~sach() = default;

string sach::getType()
{
	return "sach";
}

string sach::getTG()
{
	return this->tenTG;
}
int sach::getSoTrang()
{
	return this->soTrang;
}
void sach::Nhap()
{
	tai_lieu::Nhap();
	cin.ignore();
	cout << "nhap ten tac gia: "; getline(cin, this->tenTG);
	cout << "nhap so trang: "; cin >> this->soTrang;
}
void sach::Xuat(ostream& os)
{
	os << "sach: " << endl;
	tai_lieu::Xuat(os);
	os << "ten tac gia: " << this->getTG() << endl;
	os << "so trang: " << this->getSoTrang() << endl;
}

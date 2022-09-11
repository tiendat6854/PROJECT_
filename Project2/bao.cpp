#include "bao.h"

bao::bao() = default;

bao::bao(string _id, string _nxb, int _sb, int _nPH)
	: tai_lieu(_id, _nxb, _sb), ngayPH(_nPH)
{}
bao::~bao() = default;

string bao::getType()
{
	return "bao";
}

int bao::getNgayPH()
{
	return this->ngayPH;
}
void bao::Nhap()
{
	tai_lieu::Nhap();
	cout << "nhap ngay phat hanh: "; cin >> this->ngayPH;
}
void bao::Xuat(ostream& os)
{
	os << "bao: " << endl;
	tai_lieu::Xuat(os);
	os << "so ngay phat hanh: " << this->getNgayPH() << endl;
}

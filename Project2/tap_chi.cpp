#include "tap_chi.h"

tap_chi::tap_chi() = default;

tap_chi::tap_chi(string _id, string _nxb, int _sb, int _sph, int _tph) 
		: tai_lieu(_id, _nxb, _sb), soPH(_sph), thangPH(_tph)
{}
tap_chi::~tap_chi() = default;

string tap_chi::getType()
{
	return "tap chi";
}

int tap_chi::getSoPH()
{
	return this->soPH;
}
int tap_chi::getThangPH()
{
	return this->thangPH;
}
void tap_chi::Nhap()
{
	tai_lieu::Nhap();
	cout << "nhap so phat hanh: "; cin >> this->soPH;
	cout << "nhap thang phat hanh: "; cin >> this->thangPH;
}
void tap_chi::Xuat(ostream& os)
{
	os << "tap chi: " << endl;
	tai_lieu::Xuat(os);
	os << "so phat hanh: " << this->getSoPH() << endl;
	os << "thang phat hanh: " << this->getThangPH() << endl;
}

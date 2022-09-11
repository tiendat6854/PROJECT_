#include "..\inc\cong_nhan.h"

cong_nhan::cong_nhan() = default;

cong_nhan::cong_nhan(string _ht, int _tuoi, string _gt, string _dc, int _bac)
          : can_bo( _ht, _tuoi, _gt, _dc), bac(_bac)
{}

cong_nhan::~cong_nhan() = default;

int cong_nhan::getBac()
{
    return this->bac;
}

void cong_nhan::Nhap()
{
    can_bo::Nhap();
    cout << "nhap bac: "; cin >> this->bac;
}

void cong_nhan::Xuat(ostream& os)
{
    os << "cong nhan: " << endl;
    can_bo::Xuat(os);
    os << "Bac: " << this->getBac() << endl;
}

#include "..\inc\ky_su.h"

ky_su::ky_su() = default;

ky_su::ky_su(string _ht, int _tuoi, string _gt, string _dc, string _nganh)
      : can_bo( _ht, _tuoi, _gt, _dc), nganh(_nganh)
{}

ky_su::~ky_su() = default;

string ky_su::getNganh()
{
    return this->nganh;
}

void ky_su::Nhap()
{
    can_bo::Nhap();
    cout << "nhap nganh: "; fflush(stdin); getline(cin, this->nganh);
}

void ky_su::Xuat(ostream& os)
{
    os << "ky su: " << endl;
    can_bo::Xuat(os);
    os << "Nganh: " << this->getNganh() << endl;
}

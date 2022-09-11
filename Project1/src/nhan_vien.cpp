#include "..\inc\nhan_vien.h"

nhan_vien::nhan_vien() = default;

nhan_vien::nhan_vien(string _ht, int _tuoi, string _gt, string _dc, string _cv)
          : can_bo( _ht, _tuoi, _gt, _dc), cv(_cv)
{}

nhan_vien::~nhan_vien() = default;

string nhan_vien::getCV()
{
    return this->cv;
}

void nhan_vien::Nhap()
{
    can_bo::Nhap();
    cout << "nhap cong viec: "; fflush(stdin); getline(cin, this->cv);
}
void nhan_vien::Xuat(ostream& os)
{
    os << "nhan vien: " << endl;
    can_bo::Xuat(os);
    os << "Cong viec: " << this->getCV() << endl;
}

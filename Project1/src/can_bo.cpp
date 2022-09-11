#include "..\inc\can_bo.h"

can_bo::can_bo() = default;
can_bo::can_bo(string _ten, int _tuoi, string _gt, string _dc) 
       : ho_ten(_ten), tuoi(_tuoi), gioi_tinh(_gt), dia_chi(_dc)
{}
can_bo::~can_bo() = default;

string can_bo::getTen()
{
    return this->ho_ten;
}
int can_bo::getTuoi()
{
    return this->tuoi;
}
string can_bo::getGT()
{
    return this->gioi_tinh;
}
string can_bo::getDC()
{
    return this->dia_chi;
}
void can_bo::Nhap()
{
    cin.ignore();
    cout << "nhap ho ten: "; getline(cin, this->ho_ten);
    cout << "nhap tuoi: "; cin >> this->tuoi;
    cin.ignore();
    cout << "nhap gioi tinh: "; getline(cin, this->gioi_tinh);
    cout << "nhap dia chi: "; getline(cin, this->dia_chi);
}
void can_bo::Xuat(ostream& os)
{
    os << "ho ten: " << this->getTen() << endl;
    os << "tuoi: " << this->getTuoi() << endl;
    os << "gioi tinh: " << this->getGT() << endl;
    os << "dia chi: " << this->getDC() << endl;
}

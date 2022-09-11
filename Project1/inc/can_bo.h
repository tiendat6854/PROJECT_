#ifndef CAN_BO_H
#define CAN_BO_H

#include <iostream>
#include <string>
using namespace std;

class can_bo
{
protected:
    string ho_ten;
    int tuoi;
    string gioi_tinh;
    string dia_chi;

public:
    can_bo();
    can_bo(string, int, string, string);
    virtual ~can_bo();
    string getTen();
    int getTuoi();
    string getGT();
    string getDC();
    virtual void Nhap();
    virtual void Xuat(ostream&);
};

#endif // CAN_BO_H

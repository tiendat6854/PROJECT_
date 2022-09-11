#ifndef NHAN_VIEN_H
#define NHAN_VIEN_H
#include "can_bo.h"

class nhan_vien : public can_bo
{
private:
    string cv;
public:
    nhan_vien();
    nhan_vien(string, int, string, string, string);
    ~nhan_vien();
    string getCV();
    void Nhap();
    void Xuat(ostream& os);
};

#endif // NHAN_VIEN_H

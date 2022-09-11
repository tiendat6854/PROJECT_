#ifndef CONG_NHAN_H
#define CONG_NHAN_H

#include "can_bo.h"

class cong_nhan: public can_bo
{
private:
    int bac;
public:
    cong_nhan();
    cong_nhan(string, int, string, string, int);
    ~cong_nhan();
    int getBac();
    void Nhap();
    void Xuat(ostream& os);
};

#endif // CONG_NHAN_H

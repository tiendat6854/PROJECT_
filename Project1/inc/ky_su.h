#ifndef KY_SU_H
#define KY_SU_H
#include "can_bo.h"

class ky_su : public can_bo
{
private:
    string nganh;
public:
    ky_su();
    ky_su(string, int, string, string, string);
    ~ky_su();
    string getNganh();
    void Nhap();
    void Xuat(ostream& os);
};

#endif // KY_SU_H

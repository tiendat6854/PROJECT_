#ifndef QLCB_H
#define QLCB_H

#include <vector>
#include <fstream>

#include "can_bo.h"
#include "cong_nhan.h"
#include "ky_su.h"
#include "nhan_vien.h"

enum SELECT { CN = 1, KS, NV, BACK };

class QLCB
{
private:
    vector<can_bo*> dsCB;
public:
    ~QLCB();
    void themCB();
    void timTen();
    void inDanhSach(ostream& os);
};

#endif // QLCB_H

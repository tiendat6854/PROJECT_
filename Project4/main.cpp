#include "khu_pho.h"

int main()
{
    ofstream file_Out;
    khu_pho kp;
    kp.nhapGD();
    cout << "\n-----------OUTPUT-----------\n" << endl;

    kp.inGD(cout);

    file_Out.open("DanhSachGD.txt");
    kp.inGD(file_Out);
    file_Out.close();

    return 0;
}

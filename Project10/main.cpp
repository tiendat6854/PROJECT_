#include "vanBan.h"

enum MENU {EXIT, START};

int main()
{
    vanBan vb;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Bat dau\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case START: 
            vb.Nhap();
            cout << "so luong tu la: " << vb.countTu() << endl;
            cout << "so luong ky tu a la: " << vb.countChar_A() << endl;
            cout << "van ban chuan hoa la: "; vb.standString();
            system("pause");
            break;
        }
    } while (chon);

    return 0;
}
#include "QL_sach.h"

enum MENU {QUIT, ADD, DELETE, DISPLAY1, DISPLAY2, SEARCH};

int main()
{
    QL_sach qls;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Nhap tai lieu\n";
        cout << "2. Xoa tai lieu\n";
        cout << "3. In thong tin tai lieu ra man hinh\n";
        cout << "4. In thong tin tai lieu vao file\n";
        cout << "5. Tim kiem tai lieu\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case QUIT: break;
        case ADD: qls.themTL(); break;
        case DELETE: qls.xoaTL(); break;
        case DISPLAY1: qls.inTL(cout); system("pause"); break;
        case DISPLAY2:
        {
            ofstream file_Out;
            file_Out.open("DanhSachTL.txt");
            qls.inTL(file_Out);
            file_Out.close();
            break;
        }
        case SEARCH: qls.timTL(); break;
        }
    } while (chon);
    return 0;
}
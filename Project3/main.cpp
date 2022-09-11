#include "tuyen_sinh.h"

enum MENU { QUIT, ADD, DISPLAY1, DISPLAY2, SEARCH };
int main()
{
    tuyen_sinh ts;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them thi sinh\n";
        cout << "2. In danh sach ra man hinh\n";
        cout << "3. In danh sach vao file\n";
        cout << "4. Tim kiem theo SBD\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case QUIT: break;
        case ADD: ts.themTS(); break;
        case DISPLAY1: ts.inTS(cout); system("pause"); break;
        case DISPLAY2:
        {
            ofstream file_Out;
            file_Out.open("DanhSachTS.txt");
            ts.inTS(file_Out);
            file_Out.close();
            break;
        }
        case SEARCH: ts.timTS(); system("pause"); break;
        }
    } while (chon);
    return 0;
}
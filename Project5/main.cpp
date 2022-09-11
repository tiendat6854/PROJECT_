#include "khach_san.h"

enum MENU {EXIT, ADD, DISPLAY1, DISPLAY2, DELETE, MONEY};
int main()
{
    khach_san ks;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them khach\n";
        cout << "2. In danh sach khach ra man hinh\n";
        cout << "3. In danh sach khach vao file\n";
        cout << "4. Xoa khach\n";
        cout << "5. Tinh tien cho khach\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case ADD: ks.themKhach(); system("pause"); break;
        case DISPLAY1: ks.inDSKhach(cout); system("pause"); break;
        case DISPLAY2:
        {
            ofstream file_Out;
            file_Out.open("DanhSachKhach.txt");
            ks.inDSKhach(file_Out);
            file_Out.close();
            break;
        }
        case DELETE: ks.xoaKhach(); system("pause"); break;
        case MONEY: ks.tinhTien(); system("pause"); break;

        }
    } while (chon);
    return 0;
}
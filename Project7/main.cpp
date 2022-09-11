#include "QLGV.h"

enum MENU { EXIT, ADD, DISPLAY, DELETE, CAL };

int main()
{
    QLGV qlgv;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them giao vien\n";
        cout << "2. Hien thi danh sach giao vien\n";
        cout << "3. Xoa giao vien theo ID\n";
        cout << "4. Tinh luong cho GV theo ID\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case ADD: qlgv.addGV(); system("pause"); break;
        case DISPLAY: qlgv.display(); system("pause"); break;
        case DELETE: qlgv.deleteGV(); system("pause"); break;
        case CAL:
            qlgv.calSalary();
            system("pause"); break;
        }
    } while (chon);
    return 0;
}
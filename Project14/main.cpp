#include "studentManager.h"

enum MENU { EXIT, ADD, SELECT, DISPLAY , SORT1, SORT2};
int main()
{
    studentManager qlsv;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them sinh vien\n";
        cout << "2. Chon sinh vien trung tuyen\n";
        cout << "3. Hien thi danh sach sinh vien\n";
        cout << "4. Sap xep giam dan theo ten\n";
        cout << "5. Sap xep tang dan theo sdt\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
            case EXIT: break;
            case ADD: qlsv.addSV(); break;
            case SELECT: qlsv.selectSV(); system("pause"); break;
            case DISPLAY: qlsv.displaySV(); system("pause"); break;
            case SORT1: qlsv.sortName(); system("pause"); break;
            case SORT2: qlsv.sortPhone(); system("pause"); break;
        }

    } while (chon);

    return 0;
}
#include "QLHS.h"

enum MENU { EXIT, ADD, DISPLAY, DISPLAY20, NUMBER };

int main()
{
    QLHS qlhs;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them hoc sinh\n";
        cout << "2. Hien thi danh sach hoc sinh\n";
        cout << "3. Hien thi danh sach hoc sinh 20 tuoi\n";
        cout << "4. So luong hoc sinh 23 tuoi va que o DN\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case ADD: qlhs.addHS(); break;
        case DISPLAY: qlhs.inHS(); system("pause"); break;
        case DISPLAY20: qlhs.inHS_20(); system("pause"); break;
        case NUMBER: 
            cout << "so luong hoc sinh 23 tuoi que o DN la: " << qlhs.soLuong23DN() << endl;
            system("pause"); break;
        }
    } while (chon);
    return 0;
}
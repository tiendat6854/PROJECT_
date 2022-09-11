#include "QLCard.h"

enum MENU { EXIT, ADD, DELETE, DISPLAY };

int main()
{
    QLCard qlcard;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them the\n";
        cout << "2. Xoa the\n";
        cout << "3. Hien thi danh sach the\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case ADD: qlcard.addCard(); system("pause"); break;
        case DELETE: qlcard.deleteCard(); system("pause"); break;
        case DISPLAY: qlcard.display(); system("pause"); break;
        }
    } while (chon);
    return 0;
}
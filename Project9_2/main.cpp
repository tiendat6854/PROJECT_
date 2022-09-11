#include "QLBienLai.h"

enum MENU { EXIT, ADD, DELETE, MODIFY, DISPLAY , CAL_MONEY};

int main()
{
    QLBienLai qlbl;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them khach hang\n";
        cout << "2. Xoa khach hang\n";
        cout << "3. Sua thong tin khach hang\n";
        cout << "4. Hien thi danh sach khach hang\n";
        cout << "5. Tinh tien cho khach hang\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
        case EXIT: break;
        case ADD: qlbl.addKH(); system("pause"); break;
        case DELETE: qlbl.deleteKH(); system("pause"); break;
        case MODIFY: qlbl.modifyKH(); system("pause"); break;
        case DISPLAY: qlbl.display(); system("pause"); break;
        case CAL_MONEY: qlbl.calMoney(); system("pause"); break;
        }
    } while (chon);
    return 0;
}
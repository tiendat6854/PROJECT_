#include "employeeManager.h"

enum MENU { EXIT, ADD, MODIFY, DELETE, FIND, DISPLAY };
int main()
{
    employeeManager qlnv;
    int chon;

    do
    {
        system("cls");
        cout << "0. Thoat\n";
        cout << "1. Them nhan vien\n";
        cout << "2. Sua thong tin nhan vien\n";
        cout << "3. Xoa nhan vien\n";
        cout << "4. Tim nhan vien\n";
        cout << "5. Hien thi tat ca nhan vien\n";
        cout << "moi ban chon: "; cin >> chon;

        switch (chon)
        {
            case EXIT: break;
            case ADD: qlnv.Add(); system("pause"); break;
            case MODIFY: qlnv.Modify(); system("pause"); break;
            case DELETE: qlnv.Delete(); system("pause"); break;
            case FIND: qlnv.Find(); system("pause"); break;
            case DISPLAY: qlnv.DisplayAll(); system("pause"); break;
        }

    } while (chon);

    return 0;
}
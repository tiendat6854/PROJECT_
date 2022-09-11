#include "..\inc\qlcb.h"

enum MENU {quit, add, search, display1, display2};

int main()
{
    QLCB qlcb;
    int chon;

    do
    {
        system("cls");
        cout<<"0. Thoat\n";
        cout<<"1. Nhap danh sach\n";
        cout<<"2. Tim kiem theo ho ten\n";
        cout<<"3. In danh sach ra man hinh\n";
        cout<<"4. In danh sach vao file\n";
        cout<<"moi ban chon: "; cin >> chon;

        switch(chon)
        {
            case quit: break;
            case add: qlcb.themCB(); break;
            case search: qlcb.timTen(); system("pause"); break;
            case display1: qlcb.inDanhSach(cout); system("pause"); break;
            case display2: 
                ofstream file_Out;
                file_Out.open("DanhSach.txt");
                qlcb.inDanhSach(file_Out);
                file_Out.close();
                break;
        }
    } while (chon);
    return 0;
}

#include "..\inc\qlcb.h"

QLCB::~QLCB()
{
    for (int i = 0; i < dsCB.size(); i++)
    {
        delete dsCB[i];
        dsCB[i] = nullptr;
    }
}

void QLCB::themCB()
{
    can_bo* canbo;
    int chon = 0;
    do
    {
        system("cls");
        cout<<"1. Them cong nhan\n";
        cout<<"2. Them ky su\n";
        cout<<"3. Them nhan vien\n";
        cout<<"4. Tro ve\n";
        cout<<"lua chon: "; cin >> chon;

        switch (chon)
        {
            case CN:
                canbo = new cong_nhan();
                canbo->Nhap();
                dsCB.push_back(canbo);
                break;
            case KS:
                canbo = new ky_su();
                canbo->Nhap();
                dsCB.push_back(canbo);
                break;
            case NV:
                canbo = new nhan_vien();
                canbo->Nhap();
                dsCB.push_back(canbo);
                break;
            case BACK: break;
            default: break;
        }
    } while (chon != 4);

}
void QLCB::timTen()
{
    string name;
    cin.ignore();
    cout << "nhap ten CB can tim: "; getline(cin, name);
    for (int i = 0; i < dsCB.size(); i++)
    {
        if (dsCB[i] != NULL && dsCB[i]->getTen() == name)
        {
            dsCB[i]->Xuat(cout);
        }
    }
}
void QLCB::inDanhSach(ostream& os)
{
    for(int i = 0; i< dsCB.size(); i++)
    {
        if(dsCB[i])
            dsCB[i]->Xuat(os);
    }
}

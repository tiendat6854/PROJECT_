#include "tuyen_sinh.h"

void tuyen_sinh::themTS()
{
    int chon;

    do
    {
        system("cls");
        cout << "1. Them thi sinh khoi A\n";
        cout << "2. Them thi sinh khoi B\n";
        cout << "3. Them thi sinh khoi C\n";
        cout << "4. Tro ve\n";
        cout << "lua chon: "; cin >> chon;

        switch (chon)
        {
        case TSA:
        {
            dsTS.push_back(make_unique<thi_sinh_A>());     
            dsTS.back()->Nhap();
            break; 
        }
        case TSB:
        {
            dsTS.push_back(make_unique<thi_sinh_B>());
            dsTS.back()->Nhap();
            break;
        }
        case TSC:
        {
            dsTS.push_back(make_unique<thi_sinh_C>());
            dsTS.back()->Nhap();
            break;
        }
        case BACK: break;
        default: break;
        }
    } while (chon != 4);
}
void tuyen_sinh::inTS(ostream& os)
{
    for (int i = 0; i < dsTS.size(); i++)
    {
        if (dsTS[i])
            dsTS[i]->Xuat(os);
    }
}
void tuyen_sinh::timTS()
{
    string id;
    cin.ignore();
    cout << "nhap SBD can tim: "; getline(cin, id);
    for (int i = 0; i < dsTS.size(); i++)
    {
        if (dsTS[i] != nullptr && dsTS[i]->getId() == id)
        {
            dsTS[i]->Xuat(cout);
        }
    }
}
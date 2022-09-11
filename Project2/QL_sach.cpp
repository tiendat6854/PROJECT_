#include "QL_sach.h"

QL_sach::~QL_sach()
{
    for (int i = 0; i < dsTL.size(); i++)
    {
        delete dsTL[i];
    }
}

void QL_sach::themTL()
{
    int chon;
    tai_lieu* TL;

    do
    {
        system("cls");
        cout << "1. Them sach\n";
        cout << "2. Them tap chi\n";
        cout << "3. Them bao\n";
        cout << "4. Tro ve\n";
        cout << "lua chon: "; cin >> chon;

        switch (chon)
        {
        case SACH:
            TL = new sach();
            TL->Nhap();
            if (verifyID(TL->getId()))
                dsTL.push_back(TL);
            else
            {
                cout << "ID da ton tai !!!" << endl;
                system("pause");
            }
            break;
        case TAP_CHI:
            TL = new tap_chi();
            TL->Nhap();
            if (verifyID(TL->getId()))
                dsTL.push_back(TL);
            else
            {
                cout << "ID da ton tai !!!" << endl;
                system("pause");
            }
            break;
        case BAO:
            TL = new bao();
            TL->Nhap();
            if (verifyID(TL->getId()))
                dsTL.push_back(TL);
            else
            {
                cout << "ID da ton tai !!!" << endl;
                system("pause");
            }
            break;
        case BACK: break;
        default: break;
        }
    } while (chon != 4);
}

bool QL_sach::verifyID(string id)
{
    for (int i = 0; i < dsTL.size(); i++)
    {
        if (dsTL[i] != nullptr && dsTL[i]->getId() == id)
        {
            return false;
            break;
        }
    }

    return true;
}

void QL_sach::xoaTL()
{
    string id;
    cin.ignore();
    cout << "nhap id tai lieu can xoa: "; getline(cin, id);
    for (int i = 0; i < dsTL.size(); i++)
    {
        if (dsTL[i] != nullptr && dsTL[i]->getId() == id)
        {
            delete dsTL[i];
            dsTL.erase(dsTL.begin() + i);
        }
    }
}

void QL_sach::inTL(ostream& os)
{
    for (int i = 0; i < dsTL.size(); i++)
    {
        if (dsTL[i])
            dsTL[i]->Xuat(os);
    }
}
void QL_sach::timTL()
{
    int chon;

    do
    {
        system("cls");
        cout << "1. Sach\n";
        cout << "2. Tap chi\n";
        cout << "3. Bao\n";
        cout << "4. Tro ve\n";
        cout << "lua chon: "; cin >> chon;

        switch (chon)
        {
        case SACH:
        {
            for (int i = 0; i < dsTL.size(); i++)
            {
                if(dsTL[i] != nullptr && dsTL[i]->getType() == "sach")
                    dsTL[i]->Xuat(cout);
            }
            system("pause");
            break;
        }
        case TAP_CHI:
        {
            for (int i = 0; i < dsTL.size(); i++)
            {
                if (dsTL[i] != nullptr && dsTL[i]->getType() == "tap chi")
                    dsTL[i]->Xuat(cout);
            }
            system("pause");
            break;
        }
        case BAO:
        {
            for (int i = 0; i < dsTL.size(); i++)
            {
                if (dsTL[i] != nullptr && dsTL[i]->getType() == "bao")
                    dsTL[i]->Xuat(cout);
            }
            system("pause");
            break;
        }
        case BACK: break;
        default: break;
        }
    } while (chon != 4);
}

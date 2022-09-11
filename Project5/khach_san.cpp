#include "khach_san.h"

void khach_san::themKhach()
{
	nguoi ng;
	ng.Nhap();
    if (verifyID(ng.getCccd()))
    {
        int chon;

        do
        {
            cout << "1. Phong A\n";
            cout << "2. Phong B\n";
            cout << "3. Phong C\n";
            cout << "chon phong: "; cin >> chon;

            switch (chon)
            {
            case ROOM_A:
                dsNguoi.push_back(ng);
                dsRoom.push_back(make_unique<RoomA>());
                dsRoom.back()->Nhap();
                break;
            case ROOM_B:

                dsNguoi.push_back(ng);
                dsRoom.push_back(make_unique<RoomB>());
                dsRoom.back()->Nhap();
                break;
            case ROOM_C:
                dsNguoi.push_back(ng);
                dsRoom.push_back(make_unique<RoomC>());
                dsRoom.back()->Nhap();
                break;
            default: break;
            }
        } while (chon < 1 || chon >3);
    }
    else
    {
        cout << "so CCCD nay da ton tai !!!" << endl;
    }
}

bool khach_san::verifyID(int id)
{
    for (int i = 0; i < dsNguoi.size(); i++)
    {
        if (dsNguoi[i].getCccd() == id)
        {
            return false;
            break;
        }
    }
    return true;
}

void khach_san::inDSKhach(ostream& os)
{
    for (int i = 0; i < dsNguoi.size(); i++)
    {
        os << "nguoi thu " << i + 1 << " :"<< endl;
        dsNguoi[i].Xuat(os);
        dsRoom[i]->Xuat(os);
        os << "--------------------" << endl;
    }
}
void khach_san::xoaKhach()
{
    int cccd;
    bool check = false;
    cout << "nhap so cccd cua khach can xoa: "; cin >> cccd;
    for (int i = 0; i < dsNguoi.size(); i++)
    {
        if (dsNguoi[i].getCccd() == cccd)
        {
            dsNguoi.erase(dsNguoi.begin() + i);
            check = true;
            break;
        }
    }

    if (check == false)
    {
        cout << "khong tim thay so cccd nay !!!" << endl;
    }
}

void khach_san::tinhTien()
{
    int cccd;
    bool check = false;
    cout << "nhap so cccd cua khach can tinh tien: "; cin >> cccd;
    for (int i = 0; i < dsNguoi.size(); i++)
    {
        if (dsNguoi[i].getCccd() == cccd)
        {
            int tien = (dsRoom[i]->getNgay()) * (dsRoom[i]->getGia());
            cout << "so tien cua quy khach la: " << tien << endl;
            check = true;
            break;
        }
    }

    if (check == false)
    {
        cout << "khong tim thay so cccd nay !!!" << endl;
    }
}
#include "employeeManager.h"

void employeeManager::Add()
{
    int chon;
    do
    {
        cout << "1. Them experience\n";
        cout << "2. Them fresher\n";
        cout << "3. Them intern\n";
        cout << "chon: "; cin >> chon;

        switch (chon)
        {
        case EXPERIENCE:
        {
            unique_ptr<employee> uA = make_unique<experience>();
            uA->setID();
            auto it = dsEmployee.find(uA->getID());

            if (it != dsEmployee.end())
            {
                cout << "ID nay da ton tai !!!" << endl;           
            }
            else
            {
                uA->Nhap();
                dsEmployee.insert({ uA->getID(), move(uA) });
            }
            break;
        }
        case FRESHER:
        {
            unique_ptr<employee> uB = make_unique<fresher>();
            uB->setID();
            auto it = dsEmployee.find(uB->getID());

            if (it != dsEmployee.end())
            {
                cout << "ID nay da ton tai !!!" << endl;
            }
            else
            {
                uB->Nhap();
                dsEmployee.insert({ uB->getID(), move(uB) });
            }
            break;
        }
        case INTERN:
        {
            unique_ptr<employee> uC = make_unique<intern>();
            uC->setID();
            auto it = dsEmployee.find(uC->getID());

            if (it != dsEmployee.end())
            {
                cout << "ID nay da ton tai !!!" << endl;
            }
            else
            {
                uC->Nhap();
                dsEmployee.insert({ uC->getID(), move(uC) });
            }
            break;
        }
        default: break;
        }
    } while (chon < 1 || chon >3);
}

void employeeManager::Modify()
{
    string _id;
    bool check = false;
    cin.ignore();
    cout << "nhap ID can sua thong tin: "; getline(cin, _id);

    for (auto &i : dsEmployee)
    {
        if ((i.first) == _id)
        {
            (i.second)->modify();
            check = true;
            break;
        }
    }
    if (check == false)
    {
        cout << "khong tim thay ID nay !!!" << endl;
    }
}

void employeeManager::Delete()
{
    string _id;
    bool check = false;
    cin.ignore();
    cout << "nhap ID nhan vien can xoa: "; getline(cin, _id);

    for (auto& i : dsEmployee)
    {
        if ((i.first) == _id)
        {
            dsEmployee.erase(i.first);
            check = true;
            break;
        }
    }
    if (check == false)
    {
        cout << "khong tim thay ID nay !!!" << endl;
    }
}

void employeeManager::Find()
{
    int chon;
    do
    {
        cout << "1. Tim experience\n";
        cout << "2. Tim fresher\n";
        cout << "3. Tim intern\n";
        cout << "chon : "; cin >> chon;

        switch (chon)
        {
        case EXPERIENCE:
        {      
            int count = 1;

            for (auto& i : dsEmployee)
            {
                if ((i.second)->getEmployeeType() == 0)
                {
                    cout << "nhan vien thu " << count++ << " :" << endl;
                    (i.second)->Xuat();
                    cout << "--------------------" << endl;
                }
            }
            break;
        }
        case FRESHER:
        {
            int count = 1;

            for (auto& i : dsEmployee)
            {
                if ((i.second)->getEmployeeType() == 1)
                {
                    cout << "nhan vien thu " << count++ << " :" << endl;
                    (i.second)->Xuat();
                    cout << "--------------------" << endl;
                }
            }
            break;
        }
        case INTERN:
        {
            int count = 1;

            for (auto& i : dsEmployee)
            {
                if ((i.second)->getEmployeeType() == 2)
                {
                    cout << "nhan vien thu " << count++ << " :" << endl;
                    (i.second)->Xuat();
                    cout << "--------------------" << endl;
                }
            }
            break;
        }
        default: break;
        }
    } while (chon < 1 || chon >3);
}

void employeeManager::DisplayAll()
{
    int count = 1;

    for (auto& i : dsEmployee)
    {
        cout << "nhan vien thu " << count++ << " :" << endl;
        (i.second)->Xuat();
        cout << "--------------------" << endl;
    }
}
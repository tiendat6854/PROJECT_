#include "studentManager.h"

void studentManager::addSV()
{
    int chon;
    do
    {
        system("cls");
        cout << "1. Them SV kha gioi\n";
        cout << "2. Them SV trung binh\n";
        cout << "3. Tro ve\n";
        cout << "lua chon: "; cin >> chon;

        switch (chon)
        {
        case GOOD:
        {
            dsSV.push_back(make_unique<goodStudent>());
            dsSV.back()->Nhap();
            break;
        }
        case NORMAL:
        {
            dsSV.push_back(make_unique<normalStudent>());
            dsSV.back()->Nhap();
            break;
        }
        case BACK: break;
        default: break;
        }
    } while (chon != 3);
}

bool sort_Type(unique_ptr<student>& a, unique_ptr<student>& b)
{
    return ((a->getType() > b->getType()));
}
bool sort_Gpa(unique_ptr<student>& a, unique_ptr<student>& b)
{
    return ((a->getGpa() > b->getGpa()));
}
bool sort_EntryTest(unique_ptr<student>& a, unique_ptr<student>& b)
{
    return ((a->getEntryTest() > b->getEntryTest()));
}
void studentManager::sortTS()
{
    std::sort(dsSV.begin(), dsSV.end(), sort_EntryTest);
    std::sort(dsSV.begin(), dsSV.end(), sort_Gpa);
    std::sort(dsSV.begin(), dsSV.end(), sort_Type);
}

void studentManager::selectSV()
{
    int n;

    do
    {
        cout << "nhap so SV can tuyen dung: "; cin >> n;
        if (n < 1 || n > 4) cout << "chi tuyen 1-4 SV !!!" << endl;
    } while (n < 1 || n > 4);

    sortTS();

    cout << n << " sinh vien duoc tuyen la: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "sinh vien thu " << i + 1 << " :" << endl;
        dsSV[i]->Xuat();
        cout << "-----------------------------------\n";
    }

}
void studentManager::displaySV()
{
    for (int i = 0; i < dsSV.size(); i++)
    {
        cout << "sinh vien thu " << i + 1 << " :" << endl;
        dsSV[i]->Xuat();
        cout << "-----------------------------------\n";
    }
}

bool sort_Name(unique_ptr<student>& a, unique_ptr<student>& b)
{
    return a->getName() > b->getName();
}

bool sort_Phone(unique_ptr<student>& a, unique_ptr<student>& b)
{
    return a->getPhone() < b->getPhone();
}

void studentManager::sortName()
{
    std::sort(dsSV.begin(), dsSV.end(), sort_Name);
    displaySV();
}
void studentManager::sortPhone()
{
    std::sort(dsSV.begin(), dsSV.end(), sort_Phone);
    displaySV();
}
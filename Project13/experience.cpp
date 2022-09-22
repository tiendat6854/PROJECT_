#include "experience.h"

experience::experience() = default;
experience::~experience() = default;

int experience::getExYear()
{
	return this->exYear;
}
string experience::getProSkill()
{
	return this->proSkill;
}
int experience::getEmployeeType()
{
	return 0;
}

void experience::modify()
{
	employee::modify();
	cout << "nhap so nam kinh nghiem moi: "; cin >> this->exYear;
	cin.ignore();
	cout << "nhap ky nang chuyen mon moi: "; getline(cin, this->proSkill);
}

void experience::Nhap()
{
	employee::Nhap();
	cout << "nhap so nam kinh nghiem: "; cin >> this->exYear;
	cin.ignore();
	cout << "nhap ky nang chuyen mon: "; getline(cin, this->proSkill);
}
void experience::Xuat()
{
	employee::Xuat();
	cout << "so nam kinh nghiem: " << this->getExYear() << endl;
	cout << "ky nang chuyen mon: " << this->getProSkill() << endl;
}
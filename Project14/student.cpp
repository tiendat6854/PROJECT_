#include "student.h"

student::student() = default;
student::~student() = default;

string student::getName()
{
	return this->name;
}
string student::getDoB()
{
	return this->doB;
}
string student::getSex()
{
	return this->sex;
}
string student::getPhone()
{
	return this->phone;
}
string student::getUniName()
{
	return this->uniName;
}

int student::getType()
{
	return -1;
}

double student::getGpa() 
{
	return 0;
}
double student::getEntryTest()
{
	return 0;
}

bool student::checkNamNhuan(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool student::checkDate(string date)
{
	if (date.length() < 8 || date.length() > 10) return false;
	
	char* ch = (char*)date.c_str();
	auto p = strtok(ch, "/");
	auto d = atoi(p);
	p = strtok(NULL, "/");
	auto m = atoi(p);
	p = strtok(NULL, "/");
	auto y = atoi(p);

	if (y > 2100 || y < 1900)
		return false;
	if (m < 1 || m > 12)
		return false;
	if (d < 1 || d > 31)
		return false;

	if (m == 2)
	{
		if (checkNamNhuan(y))
			return (d <= 29);
		else
			return (d <= 28);
	}

	if (m == 4 || m == 6 || m == 9 || m == 11)
		return (d <= 30);

	return true;
}
bool student::checkName(string name)
{
	if (name.length() == 0) return false;

	for (int i = 0; i < name.length() - 1; i++)
	{
		if (name[i] == ' ' && name[i + 1] == ' ')
		{
			return false;
			break;
		}
	}

	for (auto c : name)
	{
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == ' ')))
		{
			return false;
			break;
		}
	}
	return true;
}
bool student::checkPhone(string phone)
{
	const regex pattern("(01|02|03|08|09)?[0-9]{10}");

	if (regex_match(phone, pattern))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void student::Nhap()
{
	cin.ignore();
	do
	{
		cout << "nhap ten: "; getline(cin, this->name);
		try
		{
			if (!checkName(this->name))
			{
				throw "name error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkName(this->name));

	do
	{
		cout << "nhap ngay thang nam sinh: "; getline(cin, this->doB);
		try
		{
			if (!checkDate(this->doB))
			{
				throw "date error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkDate(this->doB));

	do
	{
		cout << "nhap sdt: "; getline(cin, this->phone);
		try
		{
			if (!checkPhone(this->phone))
			{
				throw "phone error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkPhone(this->phone));

	cout << "nhap gioi tinh: "; getline(cin, this->sex);
	cout << "nhap ten truong da hoc: "; getline(cin, this->uniName);
}
void student::Xuat()
{
	cout << "ho ten: " << this->getName() << endl;
	cout << "ngay thang nam sinh: " << this->getDoB() << endl;
	cout << "sdt: " << this->getPhone() << endl;
	cout << "gioi tinh: " << this->getSex() << endl;
	cout << "ten truong da hoc: " << this->getUniName() << endl;
}
#include "employee.h"

employee::employee() = default;
employee::~employee() = default;
void employee::setID()
{
	cin.ignore();
	cout << "nhap ID: "; getline(cin, this->ID);
}
int employee::getEmployeeType()
{
	return -1;
}
string employee::getID()
{
	return this->ID;
}
string employee::getName()
{
	return this->fullName;
}
string employee::getBirthDay()
{
	return this->birthDay;
}
string employee::getPhone()
{
	return this->phone;
}
string employee::getEmail()
{
	return this->email;
}

bool employee::checkNamNhuan(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool employee::checkDate(string date)
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

bool employee::checkEmail(string email)
{
	if (!((email[0] >= 'a' && email[0] <= 'z') || (email[0] >= 'A' && email[0] <= 'Z')))
	{
		return false;
	}

	int Ac = -1, Dot = -1;

	for (int i = 0; i < email.length(); i++) 
	{
		if (email[i] == '@') 
		{
			Ac = i;
		}

		else if (email[i] == '.') 
		{
			Dot = i;
		}
	}
	if (Ac == -1 || Dot == -1)
		return false;

	if (Ac > Dot)
		return false;

	if (Dot >= (email.length() - 1))
		return false;

	return true;
}

bool employee::checkName(string name)
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
bool employee::checkPhone(string phone)
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

void employee::modify()
{
	certificate cer;
	dsCertificate.clear();

	do
	{
		cout << "nhap ten moi: "; getline(cin, this->fullName);
		try
		{
			if (!checkName(this->fullName))
			{
				throw "name error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkName(this->fullName));

	do
	{
		cout << "nhap ngay thang nam sinh moi: "; getline(cin, this->birthDay);
		try
		{
			if (!checkDate(this->birthDay))
			{
				throw "date error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkDate(this->birthDay));

	do
	{
		cout << "nhap sdt moi: "; getline(cin, this->phone);
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

	do
	{
		cout << "nhap email moi: "; getline(cin, this->email);
		try
		{
			if (!checkEmail(this->email))
			{
				throw "email error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkEmail(this->email));

	int n; cout << "nhap so luong certificate: "; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "nhap certificate thu " << i + 1 << " : " << endl;
		cer.Nhap();
		dsCertificate.push_back(cer);
	}
}

void employee::Nhap()
{
	certificate cer;
	dsCertificate.clear();

	do
	{
		cout << "nhap ten: "; getline(cin, this->fullName);
		try
		{
			if (!checkName(this->fullName))
			{
				throw "name error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkName(this->fullName));

	do
	{
		cout << "nhap ngay thang nam sinh: "; getline(cin, this->birthDay);
		try
		{
			if (!checkDate(this->birthDay))
			{
				throw "date error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkDate(this->birthDay));

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

	do
	{
		cout << "nhap email: "; getline(cin, this->email);
		try
		{
			if (!checkEmail(this->email))
			{
				throw "email error !!!";
			}
		}
		catch (const char* msg)
		{
			cerr << msg << endl;
		}
	} while (!checkEmail(this->email));

	int n; cout << "nhap so luong certificate: "; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		cout << "nhap certificate thu " << i + 1 << " : " << endl;
		cer.Nhap();
		dsCertificate.push_back(cer);
	}
}
void employee::Xuat()
{
	cout << "ID: " << this->getID() << endl;
	cout << "ho ten: " << this->getName() << endl;
	cout << "ngay sinh: " << this->getBirthDay() << endl;
	cout << "sdt: " << this->getPhone() << endl;
	cout << "email: " << this->getEmail() << endl;
	for (int i = 0; i < dsCertificate.size(); i++)
	{
		cout << "certificate thu " << i + 1 << " : " << endl;
		dsCertificate[i].Xuat();
	}
}

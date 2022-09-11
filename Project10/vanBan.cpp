#include "vanBan.h"

vanBan::vanBan() = default;
vanBan::vanBan(string _st) : st(_st) {}
vanBan::~vanBan()
{
	this->st = "";
}

string vanBan::getString()
{
	return this->st;
}
void vanBan::Nhap()
{
	cin.ignore();
	cout << "nhap van ban: "; getline(cin, this->st);
}
int vanBan::countTu()
{
	int count = 0;
	string s = this->getString();
	int len = s.length();

	if (len != 0 && s[0] != ' ')
	{
		count = 1;
	}
	for (int i = 0; i < len-1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
		{
			count++;
		}
	}
	return count;
}
int vanBan::countChar_A()
{
	int count = 0;
	for (auto c : (this->getString()))
	{
		if (c == 'a' || c == 'A')
		{
			++count;
		}
	}
	return count;
}
void vanBan::standString()
{
	string s = this->getString();
	
	if (s.length())
	{
		while (s[0] == ' ')
		{
			s.erase(s.begin());
		}
		while (s[s.length() - 1] == ' ')
		{
			s.erase(s.begin() + s.length() - 1);
		}
		for (int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == ' ' && s[i + 1] == ' ')
			{
				s.erase(s.begin() + i);
				i--;
			}
		}
	}
	cout << s << endl;
}
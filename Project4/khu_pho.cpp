#include "khu_pho.h"

khu_pho::khu_pho() = default;
khu_pho::~khu_pho() = default;

void khu_pho::nhapGD()
{
	int n;
	ho_gia_dinh gd;
	cout << "nhap so luong gia dinh: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "nhap gia dinh thu " << i+1 << " :" << endl;
		gd.Nhap();
		hgd.push_back(gd);
		cout << "----------------------------" << endl;
	}
}
void khu_pho::inGD(ostream& os)
{
	for (int i = 0; i < hgd.size(); i++)
	{
		os << "gia dinh thu " << i+1 << " :" << endl;
		hgd[i].Xuat(os);
		os << "----------------------------" << endl;
	}
}
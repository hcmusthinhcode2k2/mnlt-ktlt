#include <iostream>
using namespace std;
void nhap(int& d1, int& m1, int& y1, int& d2, int& m2, int& y2);
int count(int d1, int m1, int y1, int d2, int m2, int y2);
int SoNgayTrongThang(int m, int y);
int namNhuan(int y);
void xuat(int kq);
int ConLai(int d, int m, int y);
int stt(int d, int m, int y);
int main()
{
	int d1, m1, y1, d2, m2, y2;
	nhap(d1, m1, y1, d2, m2, y2);
	int kq = count(d1, m1, y1, d2, m2, y2);
	xuat(kq);
	return 0;
}
void nhap(int& d1, int& m1, int& y1, int&d2,int &m2,int &y2)
{
	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
}
int namNhuan(int y)
{
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return 1;
	else return 0;
}
void xuat(int kq)
{
	cout << kq;
}
int SoNgayTrongThang(int m, int y)
{
	switch (m)
	{
	case 4: case 6: case 9: case 11:
		return 30;
		break;
	case 2:
		if (namNhuan(y))
			return 29;
		return 28;
		break;
	default:
		return 31;
		break;
	}
}
//so ngay tu 1/1/yyyy den dd/mm/yyyy
int sotangtien(int d, int m, int y)
{
	int SoNgay = d;
	for (int i = m - 1; i > 0; i--)
	{
		SoNgay += SoNgayTrongThang(i, y);
	}
	return SoNgay;
}
//So ngay tu dd/mm/yyyy den 31/12/yyyy
int ConLai(int d, int m, int y)
{
	int SoNgay = SoNgayTrongThang(m, y) - d;
	for (int i = m + 1; i <= 12; i++)
		SoNgay += SoNgayTrongThang(i, y);
	return SoNgay;
}
int count(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int sign, SoNgay;
	if (y1 == y2)
	{
		SoNgay = sotangtien(d1, m1, y1) - sotangtien(d2, m2, y2);
		if (SoNgay < 0) return -SoNgay;
		else return SoNgay;
	}
	else if (y1 < y2)
	{
		SoNgay = sotangtien(d2, m2, y2) + ConLai(d1, m1, y1);
		sign = 1;
	}
	else
	{
		SoNgay = ConLai(d2, m2, y2) + sotangtien(d1, m1, y2);
		sign = -1;
	}
	// tru so ngay StartYear
	if (namNhuan(y1)) SoNgay -= 366;
	else			SoNgay -= 365;
	while (y1 != y2)
	{
		if (namNhuan(y1))	SoNgay += 366;
		else				SoNgay += 365;
		y1 = y1 + sign;
	}
	return SoNgay;
}
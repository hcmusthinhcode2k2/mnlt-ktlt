#include <iostream>
using namespace std;
void nhap(int& month, int& year);
bool nhuan(int year);
int  func(int  month, int year);
void  xuat(int kq);
int main()
{
	int month, year;
	nhap(month, year);
	int kq = func(month, year);
	xuat(kq);
	return 0;
}
void nhap(int& month, int& year)
{
	cin >> month >> year;
}
bool nhuan(int year)
{
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int  func(int month, int year)
{
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
		break;
	case 4: case 6: case 9:case 11:
		return 30;
		break;
	default:
		if (nhuan(year))
			return 29;
		else
			return 28;
	}
}
void xuat(int kq)
{
	cout << kq;
}
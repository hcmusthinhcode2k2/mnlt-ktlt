#include <iostream>
using namespace std;
void nhap(int& h, int& m, int& s);
bool check(int h, int m, int s);
void xuat(bool a);
int main()
{
	int h, m, s;
	nhap(h, m, s);
	int kq = check(h, m, s);
	xuat(kq);
	return 0;
}
void nhap(int& h, int& m, int& s)
{
	cin >> h >> m >> s;
}
bool check(int h, int m, int s)
{
	return ((h >= 0 && h <=24) && (m >= 0 && m <= 60) && (s >= 0) && (s <= 60));
}
void xuat(bool a)
{
	if (a)
	{
		cout << "hop le";
	}
	else
	{
		cout << "khong hop le";
	}
}
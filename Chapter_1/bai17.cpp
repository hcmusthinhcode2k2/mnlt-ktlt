#include <iostream>
using namespace std;
void nhap(int& h, int& m, int& s);
bool hople(int h, int m, int s);
int func(int &h, int &m, int &s);
void xuat(int h,int m,int s);
int main()
{
	int h, m, s;
	nhap(h, m, s);
	if (!hople(h, m, s))
	{
		cout << "khong hop le";
	}
	else
	{
		func(h, m, s);
		xuat(h, m, s);
	}
	return 0;
}
void nhap(int& h, int& m, int& s)
{
	cin >> h >> m >> s;
}
bool hople(int h, int m, int s)
{
	return ((h > 0 && h < 23) && (m > 0 && m < 59) && (s > 0 && s < 59));
}
int func(int& h, int& m, int& s)
{
	if (s == 59) {
		s = 0;
		m += 1;
		if (m == 60)
		{
			m = 0;
			h += 1;
			if (h == 24) h = 0;
		}
	}
	else s++;
	return s;
}
void xuat(int h, int m, int s)
{
	cout << "sau 1s la :" << h <<":" << m<<":" << s;
}

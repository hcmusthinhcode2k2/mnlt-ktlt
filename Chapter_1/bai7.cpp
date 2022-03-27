#include <iostream>
using namespace std;
void nhap(int& a, int& b, int& c);
int min2(int a, int b);
int min3(int a, int b, int c);
void xuat(int kq);
int main()
{
	int a, b, c;
	nhap(a, b, c);
	int kq = min3(a, b, c);
	xuat(kq);
	return 0;
}
void nhap(int& a, int& b, int& c)
{
	cin >> a >> b >> c;
}
int min2(int a, int b)
{
	if (a <= b)
		return a;
		return b;
}
int min3(int a, int b, int c)
{
	if (min2(a, b) <= c)
		return min(a, b);
	return c;
}
void xuat(int kq)
{
	cout << kq;
}
#include <iostream>
using namespace std;
void nhap(int& a, int& b, int& c);
int max(int a, int b);
int min(int a, int b);
int minsecond(int a, int b, int c);
void xuat(int kq);
int main()
{
	int a, b, c;
	nhap(a, b, c);
	int kq = minsecond(a, b, c);
	xuat(kq);
	return 0;
}
void nhap(int& a, int& b, int& c)
{
	cin >> a >> b >> c;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
int min(int a, int b)
{
	return (a > b) ? b : a;
}
int minsecond(int a, int b, int c)
{
	int m = max(max(a, b), c);
	int M = min(min(a, b), c);
	if ((a != m) && (a != M)) return a;
	if ((b != m) && (b != M)) return b;
	if ((c != m) && (c != M)) return c;
}
void xuat(int kq)
{
	cout << kq;
}


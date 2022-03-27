#include <iostream>
using namespace std;
void nhap(int& n);
int abs(int n);
void xuat(int kq);
int main()
{
	int n;
	nhap(n);
	int kq = abs(n);
	xuat(kq);
	return 0;
}
void nhap(int& n)
{
	cin >> n;
}
int abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}
void xuat(int kq)
{
	cout << kq;
}
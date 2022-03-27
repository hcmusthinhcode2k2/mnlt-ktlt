#include <iostream>
using namespace std;
void nhap(double &a);
int xuly(double a);
void xuat(int kq);
int main()
{
	double a;
	nhap(a);
	int kq = xuly(a);
	xuat(kq);
	return 0;
}
void nhap(double& a)
{
	cin >> a;
}
void xuat(int kq)
{
	cout << kq;
}
int xuly(double a)
{
	if (a < 0)
		return int(a) - 1;
	return int(a);
}
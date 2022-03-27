#include <iostream>
using namespace std;
void nhap(double &a,double &b);
double chuvi(double a, double b);
void xuat(double kq);
int main()
{
	double a,b;
	nhap(a, b);
	double kq = chuvi(a, b);
	xuat(kq);
	return 0;
}
void nhap(double &a, double &b)
{
	cin >> a >> b;
}
double chuvi(double a, double b)
{
	return (a + b) * 2;
}
void xuat(double kq)
{
	cout << kq;
}
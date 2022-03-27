#include <iostream>
using namespace std;
void nhap(double& a, double& b, double& c);
bool checktamgiac(double a, double b, double c);
void xuat(bool a);
int main()
{
	double a, b, c;
	nhap(a, b, c);
	double kq = checktamgiac(a, b, c);
	xuat(kq);
	return 0;
}
void nhap(double& a, double& b, double& c)
{
	cin >> a >> b >> c;
}
bool checktamgiac(double a, double b, double c)
{
	return ((a + b > c) && (a + c > b) && (b + c > a));
}
void xuat(bool a)
{
	if (a)
	{
		cout << "do la tam giac";
	}
	else
	{
		cout << "khong phai la tam giac";
	}
}
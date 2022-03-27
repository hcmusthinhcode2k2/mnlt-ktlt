include <iostream>
#include <math.h>
using namespace std;
void nhap(double& a, double& b, double& c);
int kiemtra(double a, double b, double c);
bool hople(double a, double b, double c);
bool tgvuong(double a, double b, double c);
bool tgcan(double a, double b, double c);
bool tgdeu(double a, double b, double c);
void xuat(int kq);
int main()
{
	double a, b, c;
	nhap(a, b, c);
	int kq = kiemtra(a, b, c);
	xuat(kq);
	return 0;
}
void nhap(double& a, double& b, double& c)
{
	cin >> a >> b >> c;
}
bool tgdeu(double a, double b, double c)
{
	return ((a == b) && (a == c));
}

bool tgvuong(double a, double b, double c)
{
	return ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b));
}

bool tgcan(double a, double b, double c)
{
	return ((a == b && a != c) || (b == a && b != c) || (c == a && c != b));
}

bool hople(double a, double b, double c)
{
	return ((a + b > c) && (abs(a - b) < c)
		&& (a + c > b) && (abs(a - c) < b)
		&& (b + c > a) && (abs(b - c) < a));
}

int kiemtra(double a, double b, double c)
{
	if ((a <= 0) || (b <= 0) || (c <= 0) || !hople(a, b, c))
		return 0;
	if (tgdeu(a, b, c))
		return 1;
	if (tgvuong(a, b, c) && tgcan(a, b, c))
		return 2;
	if (tgvuong(a, b, c))
		return 3;
	if (tgcan(a, b, c))
		return 4;
	return 5;
}
void xuat(int kq)
{
	switch (kq)
	{
	case 0: 
		cout << "tam giac khong hop le";
		break;
	case 1:
		cout << "tam giac deu";
		break;
	case 2:
		cout << "tam giac vuong can";
		break;
	case 3:
		cout << "tam giac vuong";
		break;
	case 4:
		cout << "tam giac can";
		break;
	case 5: 
		cout << "tam giac thuong";
	}
}

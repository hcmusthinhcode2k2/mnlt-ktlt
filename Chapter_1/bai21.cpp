#include <iostream>
#include <math.h>
using namespace std;
void nhap(float& a, float& b,float &c);
int hambachai(float a, float b, float c, float& x1, float& x2);
void xuat(int kq, float x1, float x2);
int main()
{
	float a, b, c,x1, x2;
	nhap(a, b, c);
	int kq = hambachai(a, b, c, x1, x2);
	xuat(kq,x1,x2);
	return 0;
}
void nhap(float& a, float& b, float& c)
{
	cin >> a >> b >> c;
}
int hambachai(float a, float b, float c ,float &x1, float &x2)
{
	float delta;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c!=0)
			return 0; //vo nghiem;
			return 1; //vo so nghiem;
		}
		else
		{
			x1 = -float(c) / b;
			return 2; //1nghiem;
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
			return 0;
	     if (delta == 0)
		{
			x1  = -float(b)/(2*a);
			return 2; //1nghiem;
		}
			x1 = (-b+sqrt(delta)) / (a * 2);
			x2 = (-b-sqrt(delta)) / (a * 2);
			return 3; //2 nghiem
	}
}
void xuat(int kq, float x1, float x2)
{
	switch (kq)
	{
	case 0:
		cout << "phuong trinh vo nghiem" << endl;
		break;
	case 1:
		cout << "phuong trinh vo so nghiem" << endl;
		break;
	case 2:
		cout << "phuong trinh co 1 nghiem x1 la:" << endl<< x1;
		break;
	case 3:
		cout << "phuong trinh co 2 nghiem la x1 va x2:" << x1 <<" "<<x2;
		break;
	}
}

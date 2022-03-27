#include <iostream>
using namespace std;
void nhap(float& a, float& b);
int hambacnhat(float a, float b, float& x);
void xuat(int kq, float x);
int main()
{
	float a, b, x;
	nhap(a,b);
	int kq = hambacnhat(a, b, x);
	xuat(kq, x);
	return 0;
}
void nhap(float& a, float& b) 
{
	cin >> a >> b;
}
int hambacnhat(float a, float b, float& x)
{
	if (a == 0)
	{
		if (b != 0)
			return 0;
		return 1;
	}
	x = -float(b) / a;
	return 2;
}
void xuat(int  kq, float x)
{
	switch (kq)
	{
	case 0:
		cout << "phuong trinh vo nghiem";
		break;
	case 1:
		cout << "phuong trinh vo so nghiem";
		break;
	case 2:
		cout << "phuong trinh co nghiem la x:" << x;
	}

}

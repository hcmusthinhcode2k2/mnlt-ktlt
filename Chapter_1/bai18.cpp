#include <iostream>
#include <math.h>
using namespace std;
void nhap(float& n);
void xuat(int kq);
int main()
{
	float n;
	nhap(n);
	int kq = round(n);
	xuat(kq);
	return 0;
}
void nhap(float& n)
{
	cin >> n;
}
void xuat(int kq)
{
	cout << kq;
}
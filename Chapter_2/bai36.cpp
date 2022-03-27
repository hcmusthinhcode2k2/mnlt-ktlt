#include <iostream>
#include <math.h>
using namespace std;
void nhap(int& n, float& x);
float slove(int n, float x);
void xuat(float kq);
int main()
{
	int n;
	float x;
	nhap(n, x);
	float kq = slove(n, x);
	xuat(kq);
	return 0;
}
void nhap(int& n, float& x)
{
	cin >> n >> x;
}
float slove(int n, float x)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = sqrt(x + s);
	return s;
}
void xuat(float kq)
{
	cout << kq;
}
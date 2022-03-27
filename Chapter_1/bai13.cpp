#include <iostream>
using namespace std;
void nhap(float &a,float & b, float & c, float & d);
float max(float a, float b);
void xuat(float kq);
int main()
{
	float a, b, c, d;
	nhap(a, b, c, d);
	float kq = max(max(max(a, b), c), d);
	xuat(kq);
	return 0;
}
void nhap(float& a, float& b, float& c, float& d)
{
	cin >> a >> b >> c >> d;
}
float max(float a, float b)
{
	return (a > b) ? a : b;
}
void xuat(float kq)
{
	cout << kq;
}
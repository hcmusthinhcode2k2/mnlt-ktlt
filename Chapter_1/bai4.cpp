#include <iostream>
using namespace std;
void nhap(int& a, int& b);
int  solonhon(int a, int b);
void xuat(int a);
int main()
{
	int a, b;
	nhap(a, b);
	int kq = solonhon(a, b);
	xuat(kq);
	return 0;
}
void nhap(int& a, int& b)
{
	cin >> a >> b;
}
int  solonhon(int a, int b)
{
	if (a >= b) 
	return a;
		return b;
}
void xuat(int a)
{
	cout << a;
}
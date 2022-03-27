#include <iostream>
using namespace std;
#define max 32000
void nhap(float a[], int& n);
int increase(float a[], int n);
void xuat(int kq);
int main()
{
	int n;
	float a[max];
	nhap(a, n);
	int kq = increase(a, n);
	xuat(kq);
	return 0;
}
void nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int increase(float a[], int n)
{
	for (int i = 0; i < n - 2; i++)
		if (a[i] > a[i + 1]) return 0;
	return 1;
}
void xuat(int kq)
{
	if (kq)
		cout << "day so dang tang";
	else
		cout << "day so khong xac dinh";

}
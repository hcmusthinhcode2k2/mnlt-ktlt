#include <iostream>
using namespace std;
#define size 32000
void nhapmang(int A[], int& n);
int kiemtra(int A[], int n);
void xuat(int kq);
int main()
{
	int A[size], n;
	nhapmang(A, n);
	int kq = kiemtra(A, n);
	xuat(kq);
	return 0;
}
void nhapmang(int A[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int kiemtra(int A[], int n)
{
	for (int i = 0; i < n / 2; i++)
		if (A[i] != A[n - i + 1])
			return 0;
	return 1;
}
void xuat(int kq)
{
	cout << kq;
}
#include <iostream>
using namespace std;
#define size 32000

void nhap(int A[], int& n);
void xuly(int A[], int B[], int n);
void xuat(int A[], int B[], int n);
int kitudauchan(int x);
int main()
{
	int A[size], B[size];
	int n;
	nhap(A, n);
	xuly(A, B, n);
	xuat(A, B, n);
	return 0;
}

void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int kitudauchan(int x)
{
	if (x < 0) x = -x;
	while (x >= 10)
		x = x / 10;
	if (x % 2 == 0)
		return 1;
		return 0;
}
void xuly(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++)
		if (kitudauchan(A[i]))
			B[i] = 1;
}

void xuat(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++)
		if (B[i] == 1)
			cout <<" "<< A[i];
}

#include <iostream>
#include <math.h>
using namespace std;
#define max 32000
void nhap(int A[], int& n);
int prime(int x);
int count(int A[],int n);
void xuat(int kq);
int main()
{
	int n, A[max];
	nhap(A, n);
	int kq = count(A, n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int prime(int x)
{
	{
		if (x == 2 || x == 3) return 1;
		else if (x < 2 || x % 2 == 0 || x % 3 == 0) return 0;
		else
		{
			int end = (int)sqrt(x);
			for (int i = 2; i <= end; i++)
				if (x % i == 0) return 0;
			return 1;
		}
	}
}
int count(int A[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (prime(A[i]))
			s += 1;
	return s;
}
void xuat(int kq)
{
	cout << kq;
}
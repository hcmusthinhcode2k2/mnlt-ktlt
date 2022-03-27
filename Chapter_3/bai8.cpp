#include <iostream>
#include <math.h>
using namespace std;
#define max 32000
void nhap(int A[], int& n);
int prime(int x);
float TBC(int A[], int n);
void xuat(float kq);
int main()
{
	int n, A[max];
	nhap(A, n);
	float kq = TBC(A, n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
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
float TBC(int A[], int n)
{
	float s = 0; 
	float count = 0;
	for (int i = 0; i < n; i++)
		if (prime(A[i]))
		{
			s += A[i];
			count++;
		}
	return s / count;
}
void  xuat(float kq)
{
	cout << kq;
}
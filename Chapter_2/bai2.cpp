#include <iostream>
using namespace std;
#define max 32000

void nhap(int A[], int &n);
float sum(int A[], int n);
void xuat(float kq);
int main()
{
	int n, A[max];
	nhap(A,n);
	float kq = sum(A, n);
	xuat(kq);
	return 0;
}

void nhap(int A[], int &n)
{
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i];
}
float sum(int A[],int n)
{
	float count = 0;
	for (int i = 0; i < n; i++)
		count += A[i];
	return count;
}
void xuat(float kq)
{
		cout << kq;
}

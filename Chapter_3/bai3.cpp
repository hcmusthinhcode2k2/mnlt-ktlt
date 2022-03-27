#include <iostream>
using namespace std;
#define maxArr 32000

void nhap(int A[], int &n);
int max(int A[], int n);
void xuat(float kq);
int main()
{
	int n, A[maxArr];
	nhap(A,n);
	int kq = max(A, n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i];
}
int max(int A[], int n)
{
	int result = A[0];
	for (int i = 1; i < n; i++)
		if (A[i] > result) result = A[i];
	return result;
}
void xuat(float kq)
{
		cout << kq;
}

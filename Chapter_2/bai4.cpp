#include <iostream>
using namespace std;
#define maxArr 32000

void nhap(int A[], int &n);
float TBC(int A[], int n);
void xuat(float kq);
int main()
{
	int n, A[maxArr];
	nhap(A,n);
	float kq = TBC(A, n);
	xuat(kq);
	return 0;
}

void nhap(int A[], int &n)
{
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i];
}
float TBC(int A[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += A[i];
	return sum / n;
}
void xuat(float kq)
{
		cout << kq;
}

#include <iostream>
using namespace std;
#define max 32000

void nhap(int A[], int &n);
void xuat(int A[], int n);

int main()
{
	int n, A[max];
	nhap(A,n);
	xuat(A,n);
	return 0;
}

void nhap(int A[], int &n)
{
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i];
}

void xuat(int A[], int n)
{
	for (int i=0;i<n;i++)
		cout <<""<< A[i];
}

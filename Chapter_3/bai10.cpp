#include <iostream>
#define max 32000
using namespace std;
void nhap(int A[], int& n);
int sochan(int A[], int n);
void  xuat(int A[], int pos);
int main()
{
	int n;
	int A[max];
	nhap(A, n);
	int pos = sochan(A, n);
	xuat(A, pos);
	return 0;
}
void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int sochan(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (A[i]%2==0)
			return i;
	return -1;
}
void xuat(int A[], int pos)
{
	if (pos == -1)
		cout << "1";
	else
		cout << A[pos];
}
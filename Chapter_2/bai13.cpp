#include <iostream>
#include <math.h>
#define max 32000
using namespace std;
void nhap(int A[], int& n);
int sodep(int x);
int find(int A[], int n);
void  xuat(int A[], int pos);
int main()
{
	int n;
	int A[max];
	nhap(A, n);
	int pos = find(A, n);
	xuat(A, pos);
	return 0;
}
void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int find(int A[], int n)
{
	for(int i = n - 1; i >0; i--)
		if (A[i] > 0)
			return i;
		else
			return -1;
}
void xuat(int A[], int pos)
{
	if (pos == -1)
		cout << "1";
	else
		cout << A[pos];
}
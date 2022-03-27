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
int sodep(int x)
{
	float sum = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			sum += i;
	if (sum == x)
		return 1;
	else
		return 0;
}
int find(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (sodep(A[i]))
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
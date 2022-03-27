#include <iostream>
#include <math.h>
using namespace std;
#define size 32000
void nhapmang(int A[], int &n);
int scp(int x);
void del_element(int A[], int& n,int k);
void del_scp(int A[], int &n);
void xuatmang(int A[], int n);
int main()
{
	int A[size], n;
	nhapmang(A, n);
	del_scp(A, n);
	xuatmang(A, n);
	return 0;
}
void nhapmang(int A[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
void xuatmang(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i];
}
int scp(int x)
{
	if (x < 0) return 0;
	int n = sqrt(x);
	if (x == n*n)
		return 1;
	else
		return 0;
}
void del_element(int A[], int &n,int k)
{
	for (int i = k; i < n - 1; i++)
		A[i] = A[i + 1];
	n--;
}
void del_scp(int A[], int &n)
{
	int i = 0;
	while (i < n)
	{
		if (scp(A[i]))
		    del_element(A, n, i);
		else
		    i++;
	}
}
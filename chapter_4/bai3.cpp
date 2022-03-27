/*
Tim phan tu lon thu 2
*/

#include <iostream>
#include <limits.h>
using namespace std;
#define size 32000

void nhapMang(int A[], int& n);
void xuat(int kq);
int find(int A[], int n);

int main()
{
	int A[size], n;
	nhapMang(A, n);
	int kq = find(A, n);
	xuat(A[kq]);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

void xuat(int kq)
{
	cout << kq;
}

int find(int A[], int n)
{
	int max = 0;
	int maxsecond = 1;
	//vi tri 0 va 1 
	for(int i=1;i<n;i++)
		//neu phan tu i nho hon max
		if (A[i] > A[max])
		{
			maxsecond=A[max];
			max = i;
		}
		else if (A[i] > A[maxsecond] && A[i] < A[max])
		{
			maxsecond = i;
		}
	return maxsecond;
}

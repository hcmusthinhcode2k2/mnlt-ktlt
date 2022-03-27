#include <iostream>
#include <math.h>
#define size 32000
using namespace std;
void nhapMang(int A[], int& n);
void xuly(int A[], int B[], int n);
void xuatMang(int A[], int B[], int n);

int main()
{
	int A[size], B[size];
	int n;
	nhapMang(A, n);
	xuly(A, B, n);
	xuatMang(A, B, n);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

void xuly(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++)
		if(A[i]>abs(A[i+1]))
			B[i] = 1;
}

void xuatMang(int A[], int B[], int n)
{
	for (int i = 0; i < n; i++)
		if (B[i] == 1)
			cout <<" "<< A[i];
}

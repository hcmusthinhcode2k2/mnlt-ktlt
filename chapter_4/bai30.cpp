//Dao nguoc mang
#include <iostream>
using namespace std;
#define size 32000

void nhapMang(int A[], int& n);
void daoMang(int A[], int n);
void xuatMang(int A[], int kq);

int main()
{
	int A[size], n;
	nhapMang(A, n);
	daoMang(A, n);
	xuatMang(A, n);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin >>n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

void daoMang(int A[], int n)
{
	int t;
	for (int i = 0; i < n / 2; i++)
	{
		t = A[i];
		A[i] = A[n - i - 1];
		A[n - i - 1] = t;
	}
}

/*
//C2
void daoMang(int A[], int n)
{
	int B[size],i;
	//Dung mang B[] de luu mang A[] dao nguoc
	for (i=0;i<n;i++)
		B[n-i-1]=A[i];
	//Gan lai gia tri mang B[] cho A[]
	for (i=0;i<n;i++)
		A[i]=B[i];
}
*/

void xuatMang(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i];
}

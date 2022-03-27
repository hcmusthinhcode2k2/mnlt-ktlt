/*
n
A[i],0<=i<n
i x
update A[i]
xuat A[i], 0<=i<n sau update
xuat A[i], 0<=i<n sau khi xoa
xuat A[i], 0<=i<n sau khi chen
*/

#include <iostream>
using namespace std;
#define max 32000

void nhapMang(int A[], int& n);
void nhap(int& i, int& x);
int capNhat(int A[], int i);
int xoa(int A[], int& n, int i);
int chen(int A[], int& n, int i, int x);
void xuatMang(int A[], int n);

int main()
{
	int A[max], n, i, x;
	nhapMang(A, n);
	nhap(i, x);
	capNhat(A, i);
	xuatMang(A, n);
	cout << endl;
	xoa(A, n, i);
	xuatMang(A, n);
	cout << endl;
	chen(A, n, i, x);
	xuatMang(A, n);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin>>n;
	for (int i = 0; i < n; i++)
		cin >>A[i];
}

void nhap(int& i, int& x)
{
	cin >> i >> x;
}

//Cho user cap nhat gia tri A[i]
int capNhat(int A[], int i)
{
	cin >> A[i];
}

void xuatMang(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << A[i];
}

//Xoa phan tu A[i]
int xoa(int A[], int& n, int i)
{
	for (int j = i; j < n - 1; j++)
		A[j] = A[j + 1];
	n--;
}

//Chen x vao A[i+1]
int chen(int A[], int& n, int i, int x)
{
	for (int j = n; j > i; j--)
		A[j] = A[j - 1];
	A[i + 1] = x;
	n++;
}

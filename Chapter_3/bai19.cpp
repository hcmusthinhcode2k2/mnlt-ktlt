#include <iostream>
using namespace std;
#include <math.h>
#define max 32000

void nhap(int A[], int& n);
int sodep(int x);
int first(int A[], int n);
int find(int A[], int n);
void xuat(int A[], int pos);

int main()
{
	int n, A[max];
	nhap(A, n);
	int pos = find(A, n);
	printf("%d", pos);
	//xuat(A,pos);
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
//xac dinh so dep
int first(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (sodep(A[i])) return i;
	//ko thay
	return -1;
}
//tim vi tri cua so dep nho nhat
int find(int A[], int n)
{
	int f = 0;
	{
		for (int i = f + 1; i < n; i++)
			if ((sodep(A[i]) && A[i] > A[f]) || (f == -1)) f = i;
		return f;
	}
}
void xuat(int A[], int pos)
{
	if (pos == -1) cout << 0;
	else
		cout << A[pos];
}

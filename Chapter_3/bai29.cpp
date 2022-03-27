#include <iostream>
#define maxArr 32000
using namespace std;
void nhap(int A[], int& n);
void xuat(int A[], int max, int min);
void find(int A[], int n, int& max, int& min);

int main()
{
	int n, A[maxArr], min, max;
	nhap(A, n);
	find(A, n, max, min);
	xuat(A, max, min);
	return 0;
}

void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

void find(int A[], int n, int& max, int& min)
{
	max = min = 0;
	for (int i = 1; i < n; i++)
		if (A[i] > A[max]) max = i;
		else if (A[i] < A[min]) min = i;
}

void xuat(int A[], int max, int min)
{
	cout << A[max] << " " << A[min];
}

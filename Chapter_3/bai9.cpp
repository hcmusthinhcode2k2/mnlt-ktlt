#include <iostream>
#define max 32000
using namespace std;
void nhap(float A[], int& n);
int find(float A[], int n);
void  xuat(float A[], int pos);
int main()
{
	int n;
	float A[max];
	nhap(A, n);
	int pos = find(A, n);
	xuat(A, pos);
	return 0;
}
void nhap(float A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int find(float A[], int n)
{
	for (int i = 0; i < n; i++)
		if (A[i] < 0)
			return i;
	return -1;
}
void xuat(float A[], int pos)
{
	if (pos == -1)
		cout << "1";
	else
		cout << A[pos];
}
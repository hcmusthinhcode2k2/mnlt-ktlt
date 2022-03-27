#include <iostream>
#include <math.h>
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
	int i = 0;
	//tim vi tri cua phan tu <0
	while ((A[i] >= 0) && (i < n)) i++;
	if (i > 0 && i == n - 1) return -1;
	//A[i] luon >=0; xet i>0 de bo qua TH n=1
	else
	{
		for (int j = i + 1; j < n; j++)
			if (A[j]<0 && A[j]>A[i]) i = j;
		return i;
	}
}
void xuat(float A[], int pos)
{
	if (pos == -1)
		cout << "0";
	else
		cout << A[pos];
}
#include <iostream>
using namespace std;
#define maxArr 32000
void nhap(float A[], int& n, float &x);
int find(float A[], int n, float x);
void xuat(float A[],int pos);
int main()
{
	float A[maxArr];
	int n;
	float x;
	nhap(A, n, x);
	int pos = find(A, n, x);
	xuat(A,pos);
}
void nhap(float A[], int& n, float& x)
{
	cin >> n;
	cin >> x;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int find(float A[], int n, float x)
{
	if (x >= 0) return -1;
	else for (int i = n-1; i >=0; i--)
    if (A[i]<0 && A[i]>x) return i;
			 return -1;
}
void xuat(float A[],int pos)
{
	if (pos == -1) cout << 0;
	else cout << A[pos];
}

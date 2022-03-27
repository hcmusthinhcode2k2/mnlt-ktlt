#include <iostream>
using namespace std;
#define max 32000
void nhap(int A[], int& n);
int perfectnumber(int x);
int count(int A[], int n);
void xuat(int kq);
int main()
{
	int n, A[max];
	nhap(A, n);
	int kq = count(A, n);
	xuat(kq);
	return 0;
}
void nhap(int A[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int perfectnumber(int x)
{   
	int sum = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			sum += i;
	if (sum == x)
		return 1;
	else
		return 0;
}
int count(int A[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (perfectnumber(A[i]))
			s += 1;
	return s;
}
void  xuat(int kq)
{
	cout << kq;
}
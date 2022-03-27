#include <iostream>
using namespace std;
#define	size 32000
void nhapmang(int A[], int& n);
void xuat(int kq);
int solve(int A[], int B[], int m, int n);
int main()
{
	int A[size], B[size], m, n;
	nhapmang(A, m);
	nhapmang(B, n);
	int kq = solve(A, B, m, n);
	xuat(kq);
	return 0;
}
void nhapmang(int A[], int& m)
{
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> A[i];
}
void xuat(int kq)
{
	cout << kq;
}
int solve(int A[], int B[], int m, int n)
{
	int count = m;
	for (int i = 0; i < m; i++)
	{
		int remind = 1;
		for (int j = 0; j < n; j++)
			if (B[j] == A[i])
			{
				count--;
				remind = 0;   // danh giau phan tu mang A thuoc mang B
		 }
		if (remind == 1)
			count++;
	}
	return count;
}
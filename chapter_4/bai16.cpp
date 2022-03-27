#include <iostream>
using namespace std;
#define size 32000
void nhapmang(int A[], int& m);
void xuly(int A[], int B[], int reA[], int reB[], int m, int n);
void xuat(int A[], int B[], int reA[], int reB[], int m, int n);
int main()
{
	int A[size], B[size], reA[size], reB[size];
	int m, n;
	nhapmang(A, m);
	nhapmang(B, n);
	xuly(A, B, reA, reB, m, n);
	xuat(A, B, reA, reB, m, n);
	return 0;
}
void nhapmang(int A[], int& m)
{
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> A[i];
}
void xuly(int A[], int B[], int reA[], int reB[], int m, int n)
{
	int i;
	for (int i = 0; i < m; i++)
		reA[i] = 1;
	for (int i = 0; i < m; i++)
		reB[i] = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((B[j] = A[i]) && (reA[i] == 1))
			{
				reA[j] = 0;
				reB[j] = 0;
            }

}
void xuat(int A[], int B[], int reA[], int reB[], int m, int n)
{
	int i;
	for (int i = 0; i < m; i++)
		if (reA[i])
			cout <<" "<< reA[i];
	for (int j = 0; j < n; j++)
		if (reB[i])
			cout << " "<<reB[i];
}
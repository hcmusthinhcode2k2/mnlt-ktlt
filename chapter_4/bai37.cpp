#include <iostream>
using namespace std;
#define size 1000
void nhapmang(int A[], int& n);
int AinB(int A[], int nA, int B[], int nB);
int check(int A[], int nA, int B[], int nB, int start);
int main()
{
	int A[size],B[size];
	int nA,nB;
	nhapmang(A, nA);
	nhapmang(B, nB);
	int kq = AinB(A, nA, B, nB);
	cout << kq;
	return 0;
}
void nhapmang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int AinB(int A[], int nA, int B[], int nB)
{
	if (nA > nB) return 0;
	int i = 0;
	while (i < nB)
	{
		while ((A[0] != B[i]) && (i < nB))
			i++;
		if (i == nB) return 0;
		else
			if (check(A, nA, B, nB, i))
				return 1;
		i++;
	}
	return 0;
}
int check(int A[], int nA, int B[], int nB, int start)
{
	for (int i = 0; i < nA; i++)
		if (A[i] != B[i + start])
			return 0;
	return 1;
}
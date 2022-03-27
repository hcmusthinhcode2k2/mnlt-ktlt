#include <iostream>
#include <math.h>
#define max 32000
using namespace std;
void nhap(int A[], int& n);
int songuyento(int x);
int find(int A[], int n);
void  xuat(int A[], int pos);
int main()
{
	int n;
	int A[max];
	nhap(A, n);
	int pos = find(A, n);
	xuat(A, pos);
	return 0;
}
void nhap(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int songuyento(int x)
{
	if (x == 2 || x == 3) return 1;
	else if (x < 2 || x % 2 == 0 || x % 3 == 0) return 0;
	else {
		for (int i = 2; i < sqrt(x); i++)
			if (x % 2 == 0)
				return 0;
		return 1;
	}
}
int find(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (songuyento(A[i]))
			return i;
	return -1;
}
void xuat(int A[], int pos)
{
	if (pos == -1)
		cout << "1";
	else
		cout << A[pos];
}
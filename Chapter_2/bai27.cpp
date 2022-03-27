#include <iostream>
#define max 32000
using namespace std;
void nhap(int A[], int& n);
int palindromeNum(int x);
int find(int A[], int n);
void xuat(int A[], int pos);

int main()
{
	int A[max], n;
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

int palindromeNum(int x)
{
	int AB = x, BA = 0;
	while (AB > 0)
	{
		BA = 10 * BA + AB % 10;
		AB /= 10;
	}
	if (BA == x) return 1;
	else return 0;
}

int find(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (palindromeNum(A[i])) return i;
	return -1;
}

void xuat(int A[], int pos)
{
	if (pos == -1) cout << -1;
	else cout << A[pos];

}
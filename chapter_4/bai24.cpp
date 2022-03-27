#include <iostream>
using namespace std;
#define size 32000

void nhapMang(int A[], int& n);
int kiemtra(int A[], int B[], int m, int n);
void xuat(int kq);

int main()
{
	int A[size], B[size];
	int m, n;
	nhapMang(A, m);
	nhapMang(B, n);
	int kq = kiemtra(A, B, m, n);
	xuat(kq);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

void xuat(int kq)
{
	cout << kq;
}

int kiemtra(int A[], int B[], int m, int n)
{
	int flag;
	if (m > n)
		return 0;
	{
		for (int i = 0; i < m; i++)
		{
			flag = 0;
			for (int j = 0; j < n; j++)
				if (B[i] == A[j])
				{
					flag = 1;
					break;
				}
			if (flag == 0)
				return 0;
		}
		return 1;
	}
}
#include <iostream>
using namespace std;
#define size 32000

void nhapMang(int A[], int& n);
int kiemtra(int A[], int n,int &d);
void xuat(int kq,int d);

int main()
{
	int A[size], n;
	int d;
	nhapMang(A, n);
	int kq = kiemtra(A, n,d);
	xuat(kq,d);
	return 0;
}

void nhapMang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}

int kiemtra(int A[], int n,int &d)
{
       d = A[1] - A[0];
	   for (int i = 2; i < n; i++)
		   if (A[i] - A[i - 1] != d)
			   return 0;
	   return 1;
}

void xuat(int kq,int d)
{
	if (kq == 1)
	{
		cout << " "<<kq;
		cout <<" " <<d;
	}
	else
		cout << " "<<kq;
}

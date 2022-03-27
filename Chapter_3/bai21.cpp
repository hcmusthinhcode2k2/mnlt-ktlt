//-----Phan tu A[i]%2==0 nho nhat-----

#include <iostream>
using namespace std;
#define max 32000

void nhap(int A[], int& n);
void xuat(int A[], int pos);
int first(int A[], int n);
int find(int A[], int n);

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

void xuat(int A[], int pos)
{
	if (pos == -1) cout << -1;//ko thay
	else cout << A[pos];
}

int first(int A[], int n)
{
	for (int i = 0; i < n; i++)
		if (A[i] < 0) return i;
	//Ko tim thay
	return -1;
}

int find(int A[], int n)
{
	int f=first(A, n);
	 if (f >0&&f==n-1) return -1; //A[i] luon >=0; xet i>0 de bo qua TH n=1
	 else
	 {
		 for (int i = f + 1; i < n; i++)
			 if (A[i] < 0 && A[i] > A[f]) f = i;
		 return f;
     }

}

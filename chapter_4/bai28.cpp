#include <iostream>
#include <math.h>
using namespace std;
#define size 32000
void nhapmang(int A[], int &n);
void del_element(int A[], int& n,int k);
void del_trung(int A[], int &n);
void xuatmang(int A[], int n);
int main()
{
	int A[size], n;
	nhapmang(A, n);
	del_trung(A, n);
	xuatmang(A, n);
	return 0;
}
void nhapmang(int A[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
void xuatmang(int A[], int n)
{
	for (int i = 0; i < n; i++)
		cout <<" " <<A[i];
}
void del_element(int A[], int &n,int k)
{
	for (int i = k; i < n - 1; i++)
		A[i] = A[i + 1];
	n--;
}
void del_trung(int A[], int &n)
{
	int i = 0; 
	int flag;
	while (i < n)
	{
		int j = i + 1;
		flag = 0;
		while (j < n)
		{
			if (A[j] == A[i])
			{
				del_element(A, n, j);
				flag = 1;
			}
			else;
				j++;
		}
		if (flag == 1) 
			   del_element(A, n, i);
		   else
			i++;
	}
}
#include <iostream>
using namespace std;
#define size 32000
void nhapmang(int A[], int& n);
int increase_Array(int A[], int start,int end);
void xuatdoanmang(int A[], int start, int end);
void listArr(int A[], int n);
int main()
{
	int A[size], n;
	nhapmang(A, n);
	listArr(A, n);
	return 0;
}
void nhapmang(int A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int increase_Array(int A[], int start, int end)
{
	for (int i = start; i <= end; i++)
		if (A[i] >= A[i + 1])
			return 0;
	return 1;
}
void listArr(int A[], int n)
{
	int i = 0;
	while (i < n)
	{
		int j = i + 1;
		while (j < n)
		{
			if (increase_Array(A, i, j))
			{
				xuatdoanmang(A, i, j);
				cout << endl;
			}
			j++;
		}
		i++;
	}
}
void xuatdoanmang(int A[], int start, int end)
{
	for (int i = start; i <= end; i++)
		cout << A[i];
}
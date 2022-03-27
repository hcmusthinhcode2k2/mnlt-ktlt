#include <iostream>
using namespace std;
#define size 32000
void nhapmang(float A[], int& n);
int increase_Array(float A[], int start,int end);
void listsubarray(float A[], int n);
int main()
{
	float A[size];
	int n;
	nhapmang(A, n);
	listsubarray(A, n);
	return 0;
}
void nhapmang(float A[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
}
int increase_Array(float A[], int start, int end)
{
	for (int i = start; i <= end; i++)
		if (A[i] >= A[i + 1])
			return 0;
	return 1;
}
void listsubarray(float A[], int n)
{
	int i = 0;
	float sum = 0;
	while (i < n)
	{
		int j = i + 1;
		while (j < n)
		{
			if (increase_Array(A, i, j))
				sum ++;
			j++;
		}
		i++;
	}
	cout << sum;
}
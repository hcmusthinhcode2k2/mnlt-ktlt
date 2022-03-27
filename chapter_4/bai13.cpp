#include <iostream>
using namespace std;
#define size 32000
void nhapmang(float A[],int &n);
int lonnhat(float A[],int n);
int sophantulonnhat(float A[],int n,int max);
void xuat(int kq);
int main()
{
    float A[size];
    int n;
    nhapmang(A,n);
    int max=lonnhat(A,n);
    int kq=sophantulonnhat(A,n,max);
    xuat(kq);
    return 0;
}
void nhapmang(float A[],int &n)
{
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> A[i];
}
int lonnhat(float A[],int n)
{
    int max=A[0];
    for (int i=0;i<n;i++)
        if (A[i]>max)
            max=A[i];
    return max;
}
int sophantulonnhat(float A[],int n,int max)
{
    int count=0;
    for (int i=0;i<n;i++)
        if (A[i]==max)
            count++;
    return count ;
}
void xuat(int kq)
{
    cout << kq;
}
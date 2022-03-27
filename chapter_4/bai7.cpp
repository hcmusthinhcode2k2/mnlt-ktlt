#include <iostream>
using namespace std;
#define size 32000 
void nhaparr(float A[], int& n);
void nhap(float& x, float& y);
void xuly(float A[], float flag[], float x, float y, int n);
void xuatmang(float A[], float flag[], int n);
int main()
{
    float A[size], flag[size], x, y;
    int n;
    nhapmang(A, n);
    nhap(x, y);
    xuly(A, flag, x, y, n);
    xuatmang(A, flag, n);
    return 0;
}
void nhapmang(float A[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
}
void nhap(float& x, float& y)
{
    cin >> x >> y;
}
void xuly(float A[], float flag[], float x, float y, int n)
{
    for (int i = 0; i < n; i++)
        if ((A[i] >= x) && (A[i] <= y))
            (flag[i] = 1);
}
void xuatmang(float A[], float flag[], int n)
{
    for (int i = 0; i < n; i++)
        if (flag[i] == 1)
            cout << A[i];
}
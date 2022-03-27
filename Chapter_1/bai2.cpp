#include <iostream>
using namespace std;
void nhap(int& a, int& b);
int sum(int a, int b);
void xuat(int kq);
int main()
{
    int a, b;
    nhap(a, b);
    int kq = sum(a, b);
    xuat(kq);
    return 0;
}
void nhap(int& a, int& b)
{
    cin >>a >> b;
}
int sum(int a, int b)
{
    return (a + b);
}
void xuat(int kq)
{
    cout << kq;
}
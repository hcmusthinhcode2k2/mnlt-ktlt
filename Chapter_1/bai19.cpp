#include <iostream>
using namespace std;
void nhap(int &a,int &b);
int thuong(int a,int b,float &thuong);
void xuat(int kq);
int main()
{
    int a,b;
    nhap(a,b);
    int kq=thuong(a,b);
    xuat(kq);
    return 0;
}
void nhap(int &a,int &b)
{
    cin>>a>>b;
}
int thuong(int a,int b,float &thuong)
{
    if (b=0){
        return 0;
    thuong=float(a)/b;
    return 1;
}
void xuat(int kq)
{
    if (kq=0)
        cout <<"khong thuc hien phep tinh";
    else 
      cout <<"ke qua cua thuong la:"<<thuong;
}
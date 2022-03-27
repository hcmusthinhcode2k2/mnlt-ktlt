#include <iostream>
using namespace std;
void nhap(int &nam);
bool namnhuan(int nam);
void xuat(bool a);
int main()
{
    int nam;
    nhap(nam);
    int kq=namnhuan(nam);
    xuat(kq);
    return 0;
}
void nhap(int &nam)
{
    cin >> nam;
}
bool namnhuan(int nam)
{
    if (nam %400==0)
        return true;    
    if (nam % 4 == 0 && nam % 100 !=0)
    return true;
    return false;
}
void xuat(bool a)
{
    if (a)
    {
        cout <<"nam nhuan";
    }
    else{
        cout <<"khong phai nam nhuan";
    }
}
#include <iostream>
using namespace std;
void nhap(char &ch);
char func(char ch);
void xuat(char kq);
int main()
{
	char ch;
	nhap(ch);
	char kq = func(ch);
	xuat(kq);
	return 0;
}
void nhap(char& ch)
{
	cin >> ch;
}
char func(char ch)
{
	if (ch>='A' && ch<='Z')
		return ch+32;
		return ch-32;
}
void xuat(char kq)
{
	cout << kq;
}
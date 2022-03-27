#include <iostream>
using namespace std;
void nhap(int& number);
void func(int number);
int main()
{
	int number;
	nhap(number);
	func(number);
	return 0;
}
void nhap(int& number)
{
	cin >> number;
}
void func(int number)
{
	switch (number)
	{
	case 1:  cout << "so mot";
		break;
	case 2: cout << "so hai";
		break;
	case 3: cout << "so ba";
		break;
	case 4: cout << "so bon";
		break;
	case 5: cout << "so nam";
		break;
	case 6: cout << "so sau";
		break;
	case 7: cout << "so bay";
		break;
	case 8: cout << "so tam";
		break;
	case 9: cout << "so chin";
		break;
	default:
		cout << "khong xac dinh de doc so";
	}
}
#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tong(int a. int b)
{
	return a+b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Tong 2 so :";
	cin >> tong(a,b);
	system("pause");
	return 0;
}
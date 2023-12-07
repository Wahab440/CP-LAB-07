#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cout << "Before swapping:";
	cout << " \nEnter the value of a=";
	cin >> a;
	cout << " Enter the value of b=";
	cin >> b;
	swap(a, b);
	cout << "\nAfter Swapping:";
	cout << "\nValue of a after exchange is=" << a;
	cout << "\nValue of b after exchange is=" << b;
	return 0;
}
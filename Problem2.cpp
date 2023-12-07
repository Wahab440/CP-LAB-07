#include<iostream>
using namespace std;
int areasquare(int a) 
{
	return a * a;
}

float arearectangle(float l,float b)
{
	return l * b;
}

float areacircle(float r)
{
	const float pi = 3.145;
	return pi * r * r;
}
int main()
{
	int choice;

	cout << "Press 1 for area of square.";
	cout << "\nPress 2 for area of rectangle.";
	cout << "\nPress 3 for area of circle.";
	cout << "\nEnter your choice= ";
	cin >> choice;
	if (choice == 1)
	{
		int area;
		cout << "\nEntar your area= ";
		cin >> area;
		cout << "\nThe area of square is= " << areasquare(area) << endl;
	}
	else if (choice == 2)
	{
		float l, b;
		cout << "\nEnter the length= ";
		cin >> l;
		cout << "\nEnter the Breadth= ";
		cin >> b;
		cout << "\nThe area of rectangle is= " << arearectangle(l, b)<<endl;
		cout << "\nEnter your choice= ";
		cin >> choice;
	}
	else if (choice == 3)
	{
		float r;
		cout << "\nEnter the radius= ";
		cin >> r;
		cout << "\nThe area of circle is= " << areacircle(r) << endl;
	}
	else
	{
		cout << "\nInvalid input";
	}
	return 0;
}
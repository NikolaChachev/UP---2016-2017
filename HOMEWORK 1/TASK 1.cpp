// TASK 1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	double num1, num2, num3, num4, num5;
	cout << "Enter 5 real numbers" << endl;
	cout << "first number=";
	cin >> num1;
	cout << "second number=";
	cin >> num2;
	cout << "third number=";
	cin >> num3;
	cout << "fourth number=";
	cin >> num4;
	cout << "fifth number=";
	cin >> num5;

	if (num1 < num2 || num1 < num3 || num1 < num4 || num1 < num5)
	{
		if (num2 < num3 || num2 < num4 || num2 < num5)
		{
			if (num3 < num4 || num3 < num5)
			{
				if (num4 < num5)
					cout << " The biggest number is " << num5 << endl;
				else
					cout << " The biggest number is " << num4 << endl;
			}
			else
				cout << " The biggest number is " << num3 << endl;
		}
		else
			cout << " The biggest number is " << num2 << endl;
	}
	else
		cout << " The biggest number is " << num1 << endl;






	return 0;
}

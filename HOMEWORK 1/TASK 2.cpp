// TASK 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int a, b, c, z;
	cout << " Enter 3 numbers" << endl;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	z = a * b * c;
	if (z < 0)
		cout << " The result is -" << endl;
	else if (z == 0)
		cout << " The result is 0" << endl;
	else
		cout << " The result is +" << endl;


	return 0;
}
// TASK 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{


	int a, b, c;
	cout << "Enter two variables" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	a < b ? c = b : c = a;
	if (c < 0)
	{
		cout << c * (-1) << endl;
	}
	else
		cout << c << endl;




	return 0;
}
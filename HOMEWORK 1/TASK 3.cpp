// TASK 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{

	int a, b, sum;
	cout << "Enter 2 numbers" << endl;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	sum = a + b;
	sum % 2 == 0 ? cout << sum * 2 << endl :
		cout << sum / 2 << endl;



	return 0;
}

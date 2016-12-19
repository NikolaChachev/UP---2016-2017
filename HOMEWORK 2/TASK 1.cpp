// TASK 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void NumSwap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int a, b;
	cout << "enter the two numbers:\na=";
	cin >> a;
	cout << "b=";
	cin >> b;
	NumSwap(&a, &b);
	cout << "the new numbers:\n"
		<< "a=" << a
		<< "\nb=" << b << endl;



    return 0;
}


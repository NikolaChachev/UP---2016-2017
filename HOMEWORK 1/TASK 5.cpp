// TASK 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{


	int x;
	cout << "Input a number between 1 and 9 " << endl;
	cout << "X=";
	cin >> x;

	switch (x)
	{
	case 1:
	case 2:
	case 3: cout << x * 10 << endl;
		break;
	case 4:
	case 5:
	case 6: cout << x * 100 << endl;
		break;
	case 7:
	case 8:
	case 9: cout << x * 1000 << endl;
		break;
	default: cout << "Invalid input" << endl;
	}




	return 0;
}
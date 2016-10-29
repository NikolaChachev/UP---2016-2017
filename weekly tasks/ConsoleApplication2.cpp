// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std; 


int main()
{

/*

	int x; 
	cout << "Choose a figure" << endl
		<< "Press 1 for triangle" << endl
		<< "Press 2 for square" << endl
		<< "press 3 for circle" << endl
		<< "Press 4 for rectangle" << endl
		<< "Press 5 for trapeze" << endl;
	cin >> x;

	switch (x)
	{
	case 1: int a, b, c, h;
		cout << "Enter whole numbers for a , b , c and h" << endl;
		cin >> a >> b >> c >> h;

		if (a <= 0 || b <= 0 || c <= 0 || h <= 0)
		{
			cout << "All numbers must be bigger than 0" << endl;
		}
		else 
		{
			int S = (a * h) / 2;
			int P = a + b + c;
			cout << "The perimeter of the triangle is P=" << P << endl
				<< "The area of the triangle is A=" << S << endl;
		}
		break;
	case 2: int x;
		cout << "Enter a whole number for a" << endl;
		cin >> x;
		if ( x <= 0)
		{
			cout << "Enter a number bigger than 0" << endl;
		}
		else
		{
			int P = x * 4, S = x * x;
			cout << "The perimeter of the square is P=" << P << endl
				<< "The area of the square is A=" << S << endl;
		}
		break;
	case 3: int r;
		cout << "Enter a whole number for r" << endl;
		cin >> r;
		if ( r < 0)
		{
			cout << "Enter a number bigger than 0" << endl; 
		}
		else
		{
			int S, A;
			S = (r * r);
			A = r * 2;
			cout << " The perimeter of the circle is P= " << A << "π" << endl << " The area of the circle is A=" << S << "π" << endl;
		}
		break;
	case 4: 
	{
		int a, b;
		int S, P;
		
		cout << "Enter whole numbers for a and b" << endl;
		cin >> a >> b;

		if (a <= 0 || b <= 0)
		{
			cout << "All numbers must be bigger than 0 " << endl;
		}
		else
		{
			S = a * b;
			P = 2 * a + 2 * b;
			cout << "The perimeter of the rectangle is P=" << P << endl
				<< "The area of the rectangle is A=" << S << endl;
		}
	}
		break;
	case 5: 
	{		int a, b, c, d, h;
	 cout << "Enter whole numbers for a, b, c d and h" << endl;
	 cin >> a >> b >> c >> d >> h;
	 if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0)
	 {
		cout << "All numbers must be bigger than 0 " << endl;
	 }
	 else
	 {
		double F, P;
		F = ((a + b) * h) / 2;
		P = a + b + c + d;
		cout << " The perimeter of the trapeze is P=" << P << endl
			 << " The area of the trapeze is A=" << F << endl;
	 }
	}
		break;
	default : 
		cout << "Please enter 1, 2, 3, 4 or 5" << endl;
	}


	*/
	

/*
	int A, num1;
	cout << "Insert 2 digits";
	cin >> A >> num1;
	if ((A % num1) == 0)
		cout << "A is a factor of B" <<endl;
	else
		cout << "A is not a factor of B" <<endl;


	*/


	/*
	Tansk #2 >> complete
	int X;
	cout << "Enter a number that is a factor of 2 and 3 but not of 5" << endl;
	cin >> X;
	if ((X % 2) == 0 && (X % 3) == 0 (X % 5) != 0)
		cout << "YAY YOU ENTERED A CORRECT NUMBER!" << endl;
	else
	{
		cout << "GO BACK TO THIRD GRADE!";
		cout << " YOU DON`T DESERVE TO BE HERE..." << endl;
	}
	*/






	/*
	Task #3 > complete 
	int a, b, c;
	double D, x1, x2;
	cout << "Insert 3 variables for a b and c";
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Every X is a root ^.^" << endl;
			}
			else
			{
				cout << "Not Solvable :'( " << endl;
			}
		}
		else
		{
			x1 = -c / b;
			cout << "Only one root equal to X=" << x1 << endl;
		}
	}
	else
	{
		D = b*b - 4 * a * c;
		cout << "D=" << D << endl;
		if (D < 0)
			cout << "No roots for X" << endl; 
		else if (D == 0)
		{
			x1 = -b / (2 * a);
				cout << "One double root equal to X=" << x1 << endl;
		}
		else
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "There are two roots equal to X1=" << x1 << "and X2=" << x2 << endl; 

		}
	}

	*/



	/*

	Task #4 > complete
	int digit1, digit2, digit3, number;
	cout << "Enter a 3 digit number" << endl;
	cin >> number; 
	if (number > 999)
		cout << "That`s not 3 digits you moron !" << endl;
	else
	{
		digit1 = number % 10;
		digit2 = (number / 10) % 10;
		digit3 = number / 100;
		if (digit1 < digit2 && digit2 < digit3)
		{
			cout << "Digit1=" << digit1 << endl;
			cout << "Digit2=" << digit2 << endl;
			cout << "Digit3=" << digit3 << endl;
			cout << "The digits are in ascending order" << endl;
		}
		else
		{
			cout << "The digits are not in ascending order" << endl;
			cout << "Digit1=" << digit1 << endl;
			cout << "Digit2=" << digit2 << endl;
			cout << "Digit3=" << digit3 << endl;
		}
	}

	*/



/*
Task #5 > complete
int digit1, digit2, digit3, number;
cout << "Enter a 3 digit number" << endl; 
cin >> number;
if (number > 999)
cout << "Thats not 3 digits you MORON ! " << endl;
else
{
	digit1 = number / 100;
	digit2 = (number / 10) % 10;
	digit3 = number % 10;
	if (digit1 == digit2 || digit2 == digit3 || digit3 == digit1)
		cout << "There are repeating digits in the number" << endl;
	else
		cout << "There aren`t any repeating digits in the number" << endl;

}

*/




	

    return 0;
}


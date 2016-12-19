// TASK 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int SIZE = 50;
void FillArray(int* arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> *(arr + i);
	}
}
bool CheckIfRepeat(int* arr, int *size, int *n)
{
	int counter = 0;
	for (int i = 0; i < *size; i++)
	{
		if (*(arr + i) == *n)
		{
			counter++;
			continue;
		}
		else
			cout << *(arr + i) << " ";
	}
	cout << endl;
	if (counter == 0)
		return false;
	else
		return true;
}
int main()
{
	int arr[SIZE];
	int size;
	cout << "enter the size of the array:";
	cin >> size;
	FillArray(arr, &size);
	cout << "enter a number: ";
	int n;
	cin >> n;
	cout << "the new array:\n";
	bool result = CheckIfRepeat(arr, &size, &n);
	cout << result << endl;


    return 0;
}


// TASK 2.cpp : Defines the entry point for the console application.
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
void ReverseArray(int* arr, int *size)
{
	int temp;
	for (int i = 0; i < *size / 2; i++)
	{
		temp = *(arr + i);
		*(arr + i) = *(arr + *size - 1 - i);
		*(arr + *size - 1 - i) = temp;
	}
}
void RevealArray(int* arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[SIZE], size;
	cout << "enter the size of the array: ";
	cin >> size;
	FillArray(arr, &size);
	ReverseArray(arr, &size);
	cout << "the new array is:\n";
	RevealArray(arr, &size);


    return 0;
}


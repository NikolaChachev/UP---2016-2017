// TASK 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int ROWS = 50;
const int COLS = 50;
void FillMatrix(int arr[][50], int *cols, int *rows)
{
	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			
			cin >> arr[i][j];
		}
	}
}
void RevealMatrix(int arr[][50], int *cols, int *rows, int arr2[][50])
{
	for (int i = 0; i < *rows; i++)
	{
		for (int j = 0; j < *cols; j++)
		{
			arr2[i][j] = arr[j][i];
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int array1[ROWS][COLS];
	int array2[ROWS][COLS];
	int ro, co;
	cout << "enter the size of the matrix:\n" ;
	cout << "rows:";
	cin >> ro;
	cout << "cols:";
	cin >> co;
	FillMatrix(array1, &ro, &co);
	RevealMatrix(array1, &ro, &co, array2);


    return 0;
}


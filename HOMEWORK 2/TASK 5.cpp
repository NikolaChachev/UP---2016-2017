// TASK 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//a = 97 i = 105 o = 111 e = 101 u= 117
void RemoveVocal(char* arr)
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		switch ((char)arr[i])
		{
		case 97:
		case 101:
		case 105:
		case 111:
		case 117:
			continue;
		default:
			cout << arr[i] << " ";
		}
		
	}
	cout << endl;



}
int main()
{
	char* arr = "Hello World";
	RemoveVocal(arr);
	
    return 0;
}


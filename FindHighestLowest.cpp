// SelectionSort.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
	const int n = 5;
	int a[n] ={9,5,78,7,1};
	cout<<"Printing the array"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
	cout<<">>>>>>>>>>>>>>>>>>>>Highest number<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	int max = a[0];
	for(int j=1;j<n;j++){
		if (a[j]  > max)
		{
			max = a[j];
		}
	}
	cout<<"Highest Value is :"<<max<<endl;
	
	cout<<">>>>>>>>>>>>>>>>>>Lowest Number <<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	int min =a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
		}
	}

	cout<<"The Lowest Number is :"<<min<<endl;
	return 0;
}

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
	int maxIndex = 0;
	for(int j=1;j<n;j++){
		if (a[j]  > max)
		{
			/*max = a[max];
			maxIndex = j;*/
			maxIndex = j;
		}
	}
	//cout<<"Highest Value is : "<<max <<"at the indext of "<<maxIndex<<endl;
	cout<<"Highest Value is : "<<a[maxIndex] <<" at the indext of "<<maxIndex<<endl;
	
	cout<<">>>>>>>>>>>>>>>>>>Lowest Number <<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	int min =a[0];
	int minIndex = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
			minIndex = i;
		}
	}

	cout<<"The Lowest Number is : "<<min<<" at the index of "<<minIndex<<endl;
	return 0;
}

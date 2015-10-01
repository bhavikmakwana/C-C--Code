//FibonacciSeriseByLoop
// FibonacciSeriseByLoop.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
	int  limit;
	cout<<"Enter the number for fibonacci "<<endl;
	cin>>limit;

	int first = 0;
	int second =1;
	int counter=1;
		while(counter <= limit){
			if (counter == 1)
			{
				cout<<"0|";
			}else if(counter == 2){
				cout<<"1|";
			}else{
				int ans = first+second;
				first = second;
				second = ans;
				cout<<ans<<"|";
			}
			counter++;

		}
		cout<<endl;
	
	return 0;
}

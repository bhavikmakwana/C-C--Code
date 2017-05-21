#include<iostream.h>
#include<conio.h>

void main()
{
 int a[100],n,i,j,k;
 clrscr();
 cout<<"enter the number of element "<<endl;
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }

 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
   }
  }
 }

 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}


//Bubble Sort 

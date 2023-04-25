#include<iostream>
using namespace std;
int sort(int a[][])
{int temp;
int i=0,j=0;
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {if(a[i+1]<a[j])
      {
   	{temp=a[i][j];
	a[i][j]=a[i+1][j];
	a[i+1][j]=temp;
   }  }
}
cout<<"Sorted array:";
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {cout<<a[i][j];
   }
}
}
int main()
{
int a[20][20];
int i=0,j=0;
cout<<"Enter the array";
for(i=0;i<3;i++)
{ 
  for(j=0;j<3;j++)
	{cin>>a[i][j];
	}
}
sort(a);
}
int sort(int a[][])
{int temp;
int i=0,j=0;
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {if(a[j+1]<a[j])
      {
   	{temp=a[i][j];
	a[i][j]=a[i+1][j];
	a[i+1][j]=temp;
   }  }
}
cout<<"Sorted array:";
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
   {cout<<a[i][j];
   }
}
}

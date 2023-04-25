#include<iostream>
using namespace std;
main()
{
 int n,m[100][100],temp;
 cout<<"Enter number of rows: ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<"Enter element: ";
   cin>>m[i][j];
  } 
 }
 cout<<"Matrix is:- \n";
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<m[i][j];
   cout<<"\t";
  } 
  cout<<"\n";
 }
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   for(int k=0;k<n-j-1;k++)
   {
   if(m[i][k]>m[i][k+1])
    {
     temp=m[i][k+1];
     m[i][k+1]=m[i][k];
     m[i][k]=temp;
    }
   }
  }
 }
 cout<<"Sorted matrix is: \n";
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<n;j++)
  {
   cout<<m[i][j];
   cout<<"\t";
  } 
  cout<<"\n";
 }
 
}

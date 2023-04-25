#include<iostream>
#include<math.h>
using namespace std;
int citr()
{float p,n,t,r;
float intr;
cout<<"Enter principle amount:";
cin>>p;
cout<<"\nEnter intrest rate:";
cin>>r;
cout<<"\nEnter the time";
cin>>t;
cout<<"\nNo. of time period";
cin>>n;
intr=p*pow((1+r/n),n*t);
return intr;
}
int main()
{float k;

k=citr();
cout<<"\nCompound Interest:"<<k;
}

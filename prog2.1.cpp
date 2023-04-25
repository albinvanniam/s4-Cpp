#include<iostream>
#include<stdlib.h>
using namespace std;
int n,x,id;
class bank
{
	char name[50],type[10];
	int acc_no,bal;
	public:
	bank()
	{
		bal=500;
	}
	void getdata();
	void deposit();
	void withdraw();
	void display();
}b;
void bank::getdata()
{
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Account no:";
        cin>>acc_no;
	cout<<"Type of account:";
	cin>>type;
}
void bank::deposit()
{
	cout<<"\nEnter the amount to be deposited:";
	cin>>x;
	bal+=x;
}
void bank::withdraw()
{	
	display();
	cout<<"\nEnter the amount to be withdrawn:";
	cin>>x;
	if(x>bal)
		cout<<"No sufficent amount!";
	else
		bal-=x;
}
void bank::display()
{
	cout<<"\nDetails\n";
	cout<<"Name:"<<name<<"\nAccount type:"<<type<<"\nAccount no:"<<acc_no<<"\nAccount balance:"<<bal;
}
main()
{
	int ch;
	
	
		cout<<"Enter the details required.\n";
		b.getdata();
	
   while(1)
	{
	
		cout<<"\n1.Deposit amount.\n2.Withdraw amount.\n3.Display the details.\nx.exit\nEnter the choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:	b.deposit();
				break;
			case 2: b.withdraw();
				break;
			case 3:	b.display(); 
                        default: exit(0);
			
		}	
        }
	
}

#include<iostream>
using namespace std;

void showdown()
{
	cout<<"*******CENTRAL BANK OF AMERICA & CANADA*******"<<endl;
	cout<<"**********Menu**********"<<endl;
	cout<<"1. Check balance "<<endl;
	cout<<"2. Deposit "<<endl;
	cout<<"3. Withdraw "<<endl;
	cout<<"4. Exit "<<endl;
	cout<<"**********Menu**********"<<endl;

}
int main()
{
	int option;
	double balance=500;
	do
	{
	showdown();
	cout<<"Enter option above to further process "<<endl;
	cin>>option;
	switch(option)
	{
		case 1 : cout<<"Balance : "<<balance<<"$"<<endl; break;
		case 2 : cout<<"Deposit Amount : "<<endl; 
		         double depamo;
		         cin>>depamo;
		         balance += depamo;
		break;
		case 3 : cout<<"Withdraw Amount : "<<endl; 
		         double widram;
		         cin>>widram;
		         if(widram<=balance)
		         {
		         	balance -= widram;
				 }
				 else
				 {
				 	cout<<"Not enough money "<<endl;
				 }
		break;
    }
	}while(option!=4);
	
	system("pause>0");
}

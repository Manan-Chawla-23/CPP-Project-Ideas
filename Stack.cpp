#include<iostream>
#include<stdlib.h>
using namespace std;
class Stack
{
	private:
		int top;
		int arr[5];
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<4;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if(top==-1)
			{
				cout<<"It's empty"<<endl;
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==4)
			{
				cout<<"It's full"<<endl;
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Stack is overflow"<<endl;
			}
			else
			{
				top++;
				arr[top]=val;
			}
		}
		void display()
		{
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
		
		int counts()
		{
			return(top+1);
		}
		
		void change(int pos , int val)
		{
			arr[pos]=val;
			cout<<"Value changed at location-->"<<pos<<endl;
		}
};

int main()
{
	Stack s1;
	s1.isEmpty();
	s1.push(100);
	s1.push(200);
	s1.push(300);
	s1.push(400);
	s1.push(500);
	
	s1.display();
	s1.isFull();
	s1.counts();
	s1.change(0,1000);
	s1.change(1,2000);
	s1.change(2,3000);
	s1.change(3,4000);
	s1.change(4,5000);
	s1.display();
	return 0;
}

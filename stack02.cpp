#include<iostream>
#include<bits/stdc++.h>
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
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if(top==-1)
			{
				cout<<"sunil sir tansen boi"<<endl;
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
			for(int i=4;i>=0;i++)
			{
				cout<<"Elements---->"<<arr[i]<<endl;
			}
		}
		
		int counts()
		{
			return(top+1);
		}
		
		void change(int pos,int val)
		{
			arr[pos]=val;
			cout<<"Value changed at location"<<pos<<endl;
		}
};
int main()
{
	Stack s1;
	s1.isEmpty();
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	
	s1.display();
	
	s1.isFull();
	return 0;
}

/*
# QUEUE
queue is a linear data structure which operates in FIFO or LIFO based.
It is an abstract data type just like the stack.
It is simple data structure that allows adding and removing element in a particular order.

Element add at one end or rear end called as Enqueue.
Element remove from the other end or front/head end called as Dequeue.


#Standard Queue Operation
a. enqueue -> element add from one end
b. dequeue -> element removed from one end
c. isFUll -> check is its full or not
d. isEmpty -> check if its empty
e. Count -> gets count of total items in queue

#Types of queue
a. Linear queue -> in this element are stored in a linear manner , it has two end front and rear.
                   new element insert at rear and removed from front end.
b. circular queue -> its an extension of linear queue. this allow element to wrap around and reuse space at 
					 begining of queue when it become empty.
c. double ended queue -> its more flexible than regular queue become they support operation like inserting
						 or deleting element from bith ends.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class queue
{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		queue()
		{
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if(front==-1&&rear=-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isFull()
		{
			if(rear==4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void enqueue(int val)
		{
			if(isFull())
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
			}
		}
		
		void dequeue()
};




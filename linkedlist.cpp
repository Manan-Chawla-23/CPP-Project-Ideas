#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node*link;
};
struct node* add_beg(struct node*head,int data)
{
	struct node*ptr=NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	head=ptr;
	cout<<"DATA--->"<<ptr->data<<endl;
	return head;
}
int main()
{
	struct node*head=NULL;
	int d1=100;
	int d2=200;
	int d3=300;
	add_beg(head,d1);
	add_beg(head,d2);
	add_beg(head,d3);
	return 0;
}

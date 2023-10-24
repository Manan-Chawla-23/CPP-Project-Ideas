#include<iostream>
#include<stdlib.h>
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
	ptr->link=head;
	head=ptr;
	return head;
}


int main()
{
	struct node*head=NULL;
	head=add_beg(head,100);
	struct node*temp=head;
	while(temp!=NULL)
	{
		cout<<"Linked list ' data : "<<temp->data;
		temp=temp->link;
	}
}

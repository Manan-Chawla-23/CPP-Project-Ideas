#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node*link;
};

struct node*add_beg(struct node*head,int data)
{
	struct node*ptr=NULL;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=head;
	head=ptr;
	cout<<"Data-->"<<ptr->data<<endl;
	return head;
}
int main()
{
	struct node*head=NULL;
	int data=100;
	head=add_beg(head,data);
	return 0;
}

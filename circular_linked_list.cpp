#include<iostream>
#include<stdlib.h>
using namespace std;
// FOR CREATING STRUCTURE OF THE LINKED LIST(CIRCULAR)
struct node
{
	int data;
	struct node*next;
};
// ADDING DATA TO EMPTY LIST
struct node* add_empty(int data)  
{
	struct node*temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=temp;
	return temp;
};
// FOR INSERTING THE DATA AT THE START OF THE LIST
struct node* add_beg(struct node*tail,int data) 
{
 struct node*p=NULL;
 p=(struct node*)malloc(sizeof(struct node));
 p->data=data;
 p->next=tail->next;
 tail->next=p;
 return tail;	
};
// FOR INSERTING DATA AT THE END OF THE LIST
struct node* add_last(struct node*head,int data)  
{
	struct node*p=NULL;
	p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=head->next;
    head->next=p;
    head=head->next;
    return head;
};
// FOR PRINTING THE DATA OF THE LIST
void display(struct node*head)  
{
	struct node*p=head->next;
	do
	{
		cout<<"List data -->"<<p->data<<endl;
		p=p->next;
	}while(p!=head->next);
}
// FOR DELETING THE FIRST NODE OF THE LIST
struct node* del_first(struct node*head)
{
	if(head==NULL)
	{
		return head;
	}
	struct node*temp=head->next;
	head->next=temp->next;
	free(temp);
	temp=NULL;
	return head;
};
// FOR DELETING THE LAST NODE OF THE LIST
struct node* del_last(struct node*head)
{
	if(head==NULL)
	{
		return head;
	}
	struct node*temp=NULL;
	temp=head->next;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=head->next;
	free(head);
	head=temp;
	return head;
};
// FOR COUNTING THE NODE IN THE LIST
 void count(struct node*head)
 {
 	struct node*temp=NULL;
 	temp=head->next;
 	int count=0;
 	while(temp!=head)
 	{
 	 temp=temp->next;
	  count++;	
	}
	count++;
	cout<<"Number of element in the list are "<<count<<endl;
 }
int main()
{
	struct node*head=NULL;
	// FOR ADDING THE DATA TO EMPTY LIST 
	head=add_empty(100);
	// FOR ADDING THE DATA AT THE START OF THE LIST
	head=add_beg(head,50);
	// FOR ADDING THE DATA AT THE END OF THE LIST
	head=add_last(head,150);
	// FOR DELETING THE FIRST NDOE IN THE LIST
	head=del_first(head);
	//FOR DELETING THE LAST NODE IN THE LIST
	head=del_last(head);
	// FOR PRINTING THE DATA STORED IN THE LIST
	display(head);
	// FOR COUNTING THE NUMBER OF ELEMENT IN THE LIST
	count(head);
	return 0;
}

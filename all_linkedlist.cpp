#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node*link;
};

void countnode(struct node*head)
{
	int count=0;
	if(head==NULL)
	{
		cout<<"list is empty";
	}
	else
	{
		struct node*ptr=head;
		while(ptr!=NULL)
		{
			count++;
			ptr=ptr->link;
		}
		cout<<"No of element are : "<<count<<endl;
	}
}

struct node* add_beg(struct node*head,int d)
{
	
	struct node*ptr=NULL; 
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=d;
	ptr->link=head;
	head=ptr;
	return head;
}

void add_end(struct node*head,int data)
{
	struct node*ptr=head;
	struct node*temp=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=NULL;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;
}

int main()
{
	struct node*head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=100;
	head->link=NULL;
	
	countnode(head);
	
	
	int data = 50;
    head=add_beg(head,data);
    
    int data1=200;
    add_end(head,data1);
    
    int data2=300;
    add_end(head,data2);
    
    struct node* temp = head;
    while (temp != NULL)
    {
        cout << "Node data: " << temp->data << endl;
        temp = temp->link;
    }
    
	return 0;
}

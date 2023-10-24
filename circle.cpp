#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

/*
// question 1 : calculate the area and the circumference of the circle 
int main()
{
	int r;
	float pie=3.14,area,circumference;
	cout<<"Enter the value of the r"<<endl;
	cin>>r;
	area=pie*r*r;
	circumference=2*pie*r;
	cout<<"Area : "<<area<<endl;
	cout<<"Circumference : "<<circumference<<endl;
	return 0;
}
*/



/*
// question 2 : calculate the area and the circumference of the sphere
int main()
{
	int r;
	float pie=3.14,cir, vol;
	cout<<"Enter the value of the radius "  <<endl;
	cin>>r;
	vol = (4.0 / 3.0)*pie*r*r*r; 
	cir=4*pie*r*r;
	cout<<"The volume of the sphere is : "<<vol<<endl;
	cout<<"The circumference of the sphere is : "<<cir<<endl;
	return 0;
}
*/


/*
// question 3 : find greatest number between three integers
int main()
{
	int a,b,c;
	cout<<"Enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a>b)
	{
		cout<<"A is greater than B and C";
	}
	else if(b>c)
	{
		cout<<"B is greater than C and A";
	}
	else if(a>c)
	{
		cout<<"A is greater than C";
	}
	else
	{
		cout<<"C is greater than A and B";
	}
	return 0;
}
*/


/*
// question 4 : create a class for creating and taking input of array and also print the elements of the array

class Array
{
 private: 
 int arr[200];
 int n;
 public:
 	void get()
 	{
 	 cout<<"Enter the number of element in the array"<<endl;
 	 cin>>n;
 	 for(int i=0;i<n;i++)
 	 {
 	   cin>>arr[i];
	 }
	}
	void display()
	{
		cout<<"Array's element are : "<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<"Array element : "<<arr[j]<<endl;
		}
	}
};
int main()
{
	Array a1;
	a1.get();
	a1.display();
	return 0;
}
*/



/*
// question 5 : create a program where you have to ask user about his/her choice to print the element of array 
int main()
{
	int arr[100];
	int n;
	char choice;
	cout<<"Enter the number of element for creating array :"<<endl;
	cin>>n;
	cout<<"Enter the element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"For getting the element of array print press 'A'"<<endl;
	cin>>choice;
	if(choice=='A')
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	else
	{
		cout<<"Thank you for running our code"<<endl;
	}
	return 0;
}
*/


/*
// question 6 : create an array which can insert any element at any speicfic position in array
int main()
{
	int arr[100];
	int n;
	int pos;
	int new_ele;
	cout<<"enter the number of element "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the position you want to replace it"<<endl;
	cin>>pos;
	cout<<"Enter the new element you want to replace and its postion also"<<endl;
	cin>>new_ele;
	arr[pos-1]=new_ele;
	cout<<"New array is "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
*/

/*
// question 7 : create a linked list using structure and insert an element and also print the element
struct node
{
	int data;
	struct node *link;
	int n;
};

int main()
{
	struct node *head =NULL;
	head=(struct node*)malloc(sizeof(head));
	head->data=100;
	head->link=NULL;
	cout<<head->data<<endl;
	
	struct node *current=NULL;
	current=(struct node*)malloc(sizeof(current));
	current->data=200;
	current->link=NULL;
	cout<<current->data<<endl;
	
	
	return 0;
}
*/
/*
	// experiment
	node n1;
	n1.n=5;
	for(int i=0;i<n1.n;i++)
	{
	cin>>n1.data[i];
	}
	for(int i=0;i<n1.n;i++)
	{
     cout<<n1.data[i];	
	}
	*/
	

/*
// question 8 : compute sum of two number , if numbers are equal then print their sum otherwise multiply their sum by 3 & print sum	
int main()
{
	int a,b,c;
	cout<<"enter value of a and b"<<endl;
	cin>>a;
	cin>>b;
	if(a==b)
	{
		c=a+b;
		cout<<"Sum is : "<<c<<endl;
	}
	else
	{
		c=3*(a+b);
		cout<<"Updated sum is "<<c<<endl;
	}
	return 0;
}
*/



/*
// qusestion 9 : write a code to check if two number's sum is 30 or if any or number is 30 then return true otherwise false
int main()
{
	int a ,b , c;
	cout<<"Enter value of a and b"<<endl;
	cin>>a;
	cin>>b;
	c=a+b;
	if(a==30||b==30 or c==30)
	{
		cout<<"True";
		return true;
	}
	else
	{
		return false;
	}
	return 0;
}
*/


int main()
{
	int a;
	cout<<"Enter value of a "<<endl;
	cin>>a;
	if (a == 100 || a == 200 || a < 10) 
	{
       cout << "It's true" <<endl;
        return 1;
    } 
	else 
	{
        return 0;
    }
	return 0;
}

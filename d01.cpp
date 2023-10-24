// day 01 DSA 

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

/*
int main()
{
	int r;
	float area,pi=3.14,circumference;
	
	cout<<"Enter the radius of circle"<<endl;
	cin>>r;
	area=pi*r*r;
	circumference=2*pi*r;
	cout<<"Area --> "<<area<<endl;
	cout<<"Circumference --> "<<circumference<<endl;
	return 0;
}
*/

int main()
{
	vector<int> myv;
	myv.push_back(100);
	myv.push_back(200);
	myv.push_back(300);
	myv.push_back(400);
	myv.push_back(500);
	
	for(int i=0;i<myv.size();i++)
	{
		cout<<myv[i]<<endl;
	}
}

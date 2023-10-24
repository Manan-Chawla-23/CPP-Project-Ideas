#include<bits/stdc++.h>
using namespace std;


void printrange(int start,int end)
{
	while(start<=end)
	{
	cout<<"start-->"<<start<<endl;
	start=start+1;
   }
}
int main()
{
	int start=15;
	int end=20;
	printrange(start,end);
	return 0;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
#VECTOR OR DYNAMIC ARRAY
as we know that we can't shrink or expand the array as they are not built in that way
for solving this problem we use vector or dynamic array which solve this problem.
it is the part of STL or standard template library and its incredible to store and
manipulate the collection of element.
we have to remind this for using  vector we need to use it's header file.

syntax:
       vector<data_type> vector_name;

for inserting the data we yse push_back() function

for changing value we use same method as we do in the arrays

for getting size of vector we use size() function

for getting capactiy of vector we use capacity() function

for sorting the element we use sort() function

for removing the data we use pop_back() function

for checking the vector is empty or not we use empty() function 

for clearing the vector we use clear() function 
*/
int main()
{
	vector<int> vecs;
	vecs.push_back(100);
	vecs.push_back(200);
	vecs.push_back(300);
	vecs.push_back(400);
	vecs.push_back(500);
	
	cout<<vecs[0]<<endl;
	cout<<vecs[1]<<endl;
	cout<<vecs[2]<<endl;
    cout<<vecs[3]<<endl;
	cout<<vecs[4]<<endl;
	
	vecs[0]=1000;
	vecs[1]=2000;
	vecs[2]=3000;
	vecs[3]=4000;
	vecs[4]=5000;
	
	cout<<"Size of vector : "<<vecs.size()<<endl;
	
	cout<<"Capacity of vector : "<<vecs.capacity()<<endl;
	
	if(vecs.empty())
	{
		cout<<"Vector is empty "<<endl;
	}
	else
	{
		cout<<"Vector is empty "<<endl;
	}
	
	vecs.clear();
	if(vecs.empty())
	{
		cout<<"Vector is empty "<<endl;
	}
	else
	{
		cout<<"Vector is empty "<<endl;
	}
	
	return 0;
}

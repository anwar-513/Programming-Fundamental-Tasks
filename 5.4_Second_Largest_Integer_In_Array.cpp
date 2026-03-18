#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the Number of Elements of Array---> ";
	cin>>n;
	
	int array[n];

	if(n == 0)
	{
		cout<<"Array with 0 element Entered."<<endl;
		return 0;
	}
	else if(n == 1)
	{
		cout<<"The Array have only one element: "<<*array;
		return 0;
	}
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter the "<<i<<"th element of array---> ";
		cin>>array[i];
	}
	
	
	int temp1 = INT_MIN;
	int temp2 = INT_MIN;
	for(int i = 0; i < n; i++)
	{
			if(array[i] > temp1)
			{
				temp2 = temp1;
				temp1 = array[i];
			}
			else if(array[i]>temp2 && array[i] != temp1)
			{
				temp2 = array[i];
			}
			else if(array[i]== array[i])
			{
				temp1 = array[i];
				temp2 = array[i];
			}
	}
	
	if(temp1 == temp2)
	{
		cout<<"Array have all the same elements :"<<temp1;
		return 0;
	}
	cout<<"~~~~~~~~~~~Original Array~~~~~~~~~~~~~"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";
	}
	
	cout<<"\n\nThe Second largest Element of the Array is "<<temp2;

	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the Number of Elements of Array---> ";
	cin>>n;
	
	int array[n];
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter the "<<i<<"th element of array---> ";
		cin>>array[i];
	}
	
	int max = INT_MIN;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(array[j] > max)
			{
				max = array[j] ;
			}
		}
	}
	
	cout<<"~~~~~~~~~~~Original Array~~~~~~~~~~~~~~~"<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";
	}
	
	cout<<"\nThe largest integar in the Array is "<<max;
	return 0;
}

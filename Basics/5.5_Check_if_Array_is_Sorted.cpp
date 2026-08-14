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
	
	bool flage = 1;
	for(int i = 0; i < n; i++)
	{
		if(array[i] > array[i+1])
		{
			flage = false;
		}
	}
	
	if(flage)
	{
		cout<<"The given array is Unsorted."<<endl;
	}
	else
	{
		cout<<"The given array is Sorted."<<endl;
	}
	

	return 0;
}




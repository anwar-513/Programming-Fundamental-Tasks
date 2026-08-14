#include<iostream>

using namespace std;

int main()
{
	int elements;
	
	cout<<"Enter the number of elements of the array---> ";
	cin>>elements;
	
	int array[elements];
	
	for(int i = 0; i < elements; i++)
	{
		cout<<"Enter the "<<i<<"th Element of the array---> ";
		cin>>array[i];
	}
	
	cout<<"~~~~~~~~~~~Given Array~~~~~~~~~~~\n";
	for(int i = 0; i < elements; i++)
	{
		cout<<array[i]<<" ";
	}
	
 	for(int i = 0; i < elements; i++)
 	{
 		for(int j = 0; j < elements; j++)
 		{
	 		if(array[j] == array[j+1])
	 		{
	 			array[j+1] = array[j+1+i];
			}
	    }
	    
	}
	
	
	cout<<"\n~~~~~~~Array After Duplicates Removed~~~~~~~\n";
	for(int i = 0; i < elements; i++)
	{
		cout<<array[i]<<" ";
	}
	
	
	return 0;
}

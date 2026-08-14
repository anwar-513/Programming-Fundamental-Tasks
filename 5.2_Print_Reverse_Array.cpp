#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"Enter the number of Elements of Array---> ";
	cin>>n;
	int array[n];
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter the "<<i<<"th Element of Array--->";
		cin>>array[i];
	}
	
	cout<<"~~~~Original Array~~~~~~\n";
	for(int i = 0; i<n; i++)
	{
		cout<<array[i]<<" ";
		
	}
	
	int temp[n];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-i; j++)
		{
			temp[i] = array[j];
		}
	}
	
	cout<<endl<<"~~~~~Reverse Array~~~~~\n";
	for(int i = 0; i < n; i++)
	{
	cout<<temp[i]<<" ";
	}
	
	return 0;
}

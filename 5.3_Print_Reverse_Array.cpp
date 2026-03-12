#include<iostream>
using namespace std;


int main()
{
	int array[5] = {9,2,7,4,5};
	
	cout<<"~~~~Original Array~~~~~~\n";
	for(int i = 0; i<5; i++)
	{
		cout<<array[i]<<" ";
		
	}
	
	int temp[5] = {0};
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5-i; j++)
		{
			temp[i] = array[j];
		}
	}
	
	cout<<endl<<"~~~~~Reverse Array~~~~~\n";
	for(int i = 0; i < 5; i++)
	{
	cout<<temp[i]<<" ";
	}
	
	return 0;
}

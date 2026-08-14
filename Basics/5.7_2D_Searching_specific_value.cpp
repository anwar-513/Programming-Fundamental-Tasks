#include<iostream>
using namespace std;

int main()
{
	int array[10][10] = { 
						{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
						{2, 3, 4, 5, 6, 7, 8, 9, 10, 1},
						{3, 4, 5, 6, 7, 8, 9, 10, 1, 2},
						{4, 5, 6, 7, 8, 9, 10, 1, 2, 3},
						{5, 6, 7, 8, 9, 10, 1, 2, 3, 4},
						{6, 7, 8, 9, 10, 1, 2, 3, 4, 5},
						{7, 8, 9, 10, 1, 2, 3, 4, 5, 6},
						{8, 9, 10, 1, 2, 3, 4, 5, 6, 7},
						{9, 10, 1, 2, 3, 4, 5, 6, 7, 8},
						{10, 1, 2, 3, 4, 5, 6, 7, 8, 9},										
						};
	
	int value = 0;
	
	cout<<"Enter the value---> ";
	cin>>value;
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(array[j][i] == value)
			{
				cout<<"The given value address "<<i<<", "<<j<<endl;
				break;
			}
		}
	}
	
	return 0;
}

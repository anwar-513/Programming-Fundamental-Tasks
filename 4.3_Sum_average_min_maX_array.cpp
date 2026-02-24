#include<iostream>
using namespace std;

void sumAverage(int array[],int);

int main()
{
    int size = 10;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element "<<i+1<<"---> ";
        cin>>array[i];
    }

    sumAverage(array, size);



    return 0;
}

void sumAverage(int array[], int size)
{
    int count=0;
    int minimum;
    int negativeNum=0;
    int sum=0;
    for(int i = 0; i < size; i++)
    {
        if(array[i]>0)
        {
        sum = sum + array[i];
        }
    }
    cout<<"The Sum of the Positive number in array "<<sum<<endl;
    for(int j = 0; j < size; j++)
    {
        if(array[j]>0)
        {
            count++;
        }
    }
    cout<<"\nThe average of the positive number is "<<sum/count<<endl;
    cout<<"The negative number is/are ";
    for(int k = 0; k < size; k++)
    {
        if(array[k]<0)
        {
            cout<<array[k]<<" ";
            negativeNum++;
        }
    }
    cout<<"\nThe negative numbers in the array are "<<negativeNum<<endl;
    for(int z =0; z < size; z++)
    {
        while(array[z]<array[z+1])
        {   
            minimum = array[z];
        }
        
    }
    cout<<"The minimum number is the array is "<<minimum<<endl;


    
}
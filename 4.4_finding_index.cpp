#include<iostream>
using namespace std;

int indexMin(int array[], int);
int indexMax(int array[], int);


int main()
{
    int size = 10;

    int array[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element "<<i+1<<"---> ";
        cin>>array[i];
    }

    cout<<"the minimum's value index is "<<indexMin(array, size)<<endl;
    cout<<"the Maximum's value index is "<<indexMax(array, size)<<endl;

}

int indexMin(int array[], int size)
{
    int minimum = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < array[minimum])
        minimum = i;
    }
    return minimum;
}

int indexMax(int array[], int size)
{
    int max = 0;
    for(int i = 0; i < size; i++ )
    {
        if(array[i]>array[max])
        {
            max = i;
        }
    }
    return max;
}
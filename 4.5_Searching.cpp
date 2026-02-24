#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int searching;
    int array[size];

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter the element "<<i+1<<"---> ";
        cin>>array[i];
        while(array[i] > 30 || array[i] < 0)
        {
            cout<<"Invalid entry value range is 0-30 "<<endl;
            cout<<"Enter the element "<<i+1<<" again---> ";
            cin>>array[i];
        }
    }

    cout<<"Enter the value for searching---> ";
    cin>>searching;

    bool ispresent = false;

    for(int j = 0; j < size; j++)
    {

        if(searching == array[j])
        {
            ispresent = true;
        }
    }
    if(ispresent)
        cout<<"the number exist in the array";
    else
         cout<<"the number doesn't exist in the array";


    return 0;
}
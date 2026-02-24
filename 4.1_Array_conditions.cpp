#include<iostream>
using namespace std;

int main()
{  
    int index;
    bool condition = false;

    int count = 0;
    int search;
    int value;

    cout<<"Enter the number of indexs---> ";
    cin>>index;

    int numbers[index]={0};

    for(int i = 0; i < index; i++)
    {
        cout<<"Enter the number index "<<i<<"---> ";
        cin>>value;
        while(value < 0 || value > 30)
        {
            cout<<"The entered number is invalid."<<endl;
            cout<<"Enter the valid numbernumber slot"<<i<<"---> ";
             cin>>value;
        }
        numbers[i]=value;


    }
    cout<<"Enter the number for searching---> ";
    cin>>search;
    
    for(int j = 0; j < index; j++)
    {
        if(search == numbers[j])
        {
        condition = true;
        count++;
        }
        
    }
    if(condition)
        {
            cout<<"The given number is found in the array."<<endl;
            cout<<"The given number is "<<count<<" times found is array."; 
        }
        else
        {
            cout<<"The given number is not found in the array."<<endl;
        }

    return 0;
}
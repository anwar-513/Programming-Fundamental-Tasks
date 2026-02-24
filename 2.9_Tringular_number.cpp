#include<iostream>
using namespace std;

int main()
{ 
    int count = 0;   
    int number;

    cout<<"Enter the number---> ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {

        cout<<i+count<<" ";
        count +=i;
        
    }
    

    return 0;
}
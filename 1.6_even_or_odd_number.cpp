#include<iostream>
using namespace std;
int main()
{
    int number;

    cout<<"Enter number----> ";
    cin>>number;

    if((number / 2) * 2 == number)
    {
        cout<<"it is even number.";
    } 
    else
        cout<<"it is odd number.";

    return 0;
}
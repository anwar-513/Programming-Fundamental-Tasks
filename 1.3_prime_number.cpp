#include<iostream>
using namespace std;
int main()
{
    double number;

    cout<<"Enter number---> ";
    cin>>number;

    for(int i = 2; i <= number; i++)
    {
        bool isprime = true;
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if(isprime)
            cout<<i<<", ";
    }

    return 0;
}